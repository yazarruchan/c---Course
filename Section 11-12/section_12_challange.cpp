#include<iostream>

using namespace std;

//Function Prototypes
int* apply_all(int [], size_t, int [], size_t);
void printResult(int*, size_t);
//End Function Prototypes

int main(){

    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};

    printResult(array1, 5);
    printResult(array2, 3);

    int *result = apply_all(array1,5,array2,3);

    printResult(result,15);

    delete [] result; 

    return 0;
}

int *apply_all(int arr1[], size_t arr1_size, int arr2[], size_t arr2_size)
{
    int *result_storage {nullptr};
    result_storage = new int[arr1_size*arr2_size];
    if(result_storage == nullptr)//check if memory is allocated
    {
        cout << "No memory allocated!" << endl;
    }
    size_t result_size{0};
    for (size_t i{0};i<arr2_size;i++)
    {
        for (size_t j = 0; j < arr1_size; j++)
        {
            result_storage[result_size]=arr1[j]*arr2[i];
            result_size++;
        }
        
    }
    if (result_size != (arr1_size*arr2_size))
    {
        cout << "Something goes wrong while result calculating!" << endl;
    }
    
    



    return result_storage;
}

void printResult(int *result, size_t result_size)
{
    for (size_t i = 0; i < result_size; i++)
    {
        cout << *(result+i) << " ";
    }
    cout << endl;
    
}
