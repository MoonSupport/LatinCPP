#include <cstddef>
#include <iostream>
#include <locale>

using std::wcout;
using std::endl;

constexpr wchar_t * const texts[] = {
  L"안녕하세요", // Korean,
  L"Ñá", //Spanish
  L"forêt intérêt", //French
  L"Gesäß", //German
  L"取消波蘇日奇諾", //Chinese
  L"日本人のビット", //Japanese
  L"немного русский", //Russian
  L"ένα κομμάτι της ελληνικής", // Greek
  L"ਯੂਨਾਨੀ ਦੀ ਇੱਕ ਬਿੱਟ", // Punjabi (wtf?). xD
  L"کمی از ایران ", // Persian (I know it, from 300 movie)
  L"కానీ ఈ ఏమి నరకం ఉంది?", //Telugu (telu-what?)
  L"Но какво, по дяволите, е това?" //Bulgarian
};

constexpr size_t ntexts = sizeof(texts) / sizeof(texts[0]);

int main(void)
{
  std::locale::global(std::locale(""));
  wcout.imbue(std::locale());

  for ( size_t i = 0; i < ntexts; ++i )
    wcout << texts[i] << endl;

  return EXIT_SUCCESS;
}
