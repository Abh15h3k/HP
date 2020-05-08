
#include <chrono>
#include <iostream>
#include <tbb/parallel_for.h>
#include <tbb/tbb.h>


#define N (1 << 26)

using namespace std;
using namespace std::chrono;
using HRTimer = high_resolution_clock::time_point;

void seq_incr(float* a) {
    for (int i = 0; i < N; i++)
        a[i] += 10;
}

void parallel_incr(float* a) {
    tbb::parallel_for(static_cast<size_t>(0),
    static_cast<size_t>(N),[&](size_t i) { a[i] += 10; });
}

int main() {
    float* a = new float[N];
    for (int i = 0; i < N; i++)
        a[i] = static_cast<float>(i);

    HRTimer start = high_resolution_clock::now();
    seq_incr(a);
    HRTimer end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start).count();
    cout << "Sequential increment in " <<duration << " us\n";
    start = high_resolution_clock::now();
    parallel_incr(a);
    end = high_resolution_clock::now();
    duration = duration_cast<microseconds>(end - start).count();
    cout << "Parallel increment in " << duration << " us\n";
    return EXIT_SUCCESS;
}
