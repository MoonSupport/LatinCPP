//
//  main.cpp
//  MultipleInheritance
//
//  Created by 문지원 on 02/02/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>
using namespace std;

class USBDevice {
    private:
        long m_id;
        
    public:
        USBDevice(long id):
        m_id(id) {
            
        }
        
        long getID() {
            return m_id;
        }
        
        void plugAndPlay() {
            
        }
    
};

class NetworkDevice {
    private:
        long m_id;
        
    public:
        NetworkDevice(long id):
        
        m_id(id) {
            
        }
        
        long getID() {
            return m_id;
        }
        
        void networking() {
            
        }
};

class USBNetworkDevice: public USBDevice, public NetworkDevice
{
public:
    USBNetworkDevice(long usb_id, long net_id)
        : USBDevice(usb_id), NetworkDevice(net_id)
    {}
    
};

int main(int argc, const char * argv[]) {
    
    USBNetworkDevice my_device(3.14, 6.022);
    
    my_device.networking();
    my_device.plugAndPlay();
    
    std::cout << my_device.USBDevice::getID() << std::endl;
    std::cout << my_device.NetworkDevice::getID() << std::endl;

    
    
    return 0;
}
