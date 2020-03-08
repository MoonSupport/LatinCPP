#include <condition_variable>
#include <iostream>
#include <mutex>
#include <string>
#include <thread>

std::condition_variable cv;
std::mutex m;
bool done = false;
std::string info;

void worker() {
  {
    std::lock_guard<std::mutex> lk(m);
    info = "some data";  // 위의 p->set_value("some data") 에 대응
    done = true;
  }
  cv.notify_all();
}

int main() {
  std::thread t(worker);

  std::unique_lock<std::mutex> lk(m);
  cv.wait(lk, [] { return done; });  // 위의 data.wait() 이라 보면 된다.
  lk.unlock();

  std::cout << "받은 데이터 : " << info << std::endl;

  t.join();
}
