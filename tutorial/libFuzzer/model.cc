#include <iostream>

using namespace std;

void FunctionToBeFuzzed(int data, size_t size) {
    int arr[data];
    for(int i=0;i<data;i++)
	{data[i];}
}

extern "C" {


int LLVMFuzzerTestOneInput(int data, size_t size) {
    FunctionToBeFuzzed(data, size);
    return 0;
    }
}

