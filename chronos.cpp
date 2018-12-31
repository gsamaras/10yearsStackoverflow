#include <iostream>
#include <ctime>
#include <ratio>
#include <chrono>
#include <windows.h>

int main(void) {
    using namespace std::chrono;

    high_resolution_clock::time_point t1 = high_resolution_clock::now();

    ShellExecute(NULL, "open", "https://gsamaras.files.wordpress.com/2018/11/chronosgodascii.png", NULL, NULL, SW_SHOWNORMAL);

    high_resolution_clock::time_point t2 = high_resolution_clock::now();

    duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

    std::cout << "Chronos needed to show you Chronos, was " << time_span.count() << " seconds." << std::endl;

    return 0;
}
