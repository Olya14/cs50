#include <iostream>

void sort(int array[], int start, int end);
void merge (int array[], int start_1, int end_1, int start_2, int end_2);


int main(void){
    int array[10] = {2, 5, 7, 3, 23, 9, 5, 6, 12, 16};
    int n = sizeof(array)/sizeof(array[0]);

    for (int i = 0; i < n; i++)
        std::cout << array[i] << ' ';
    std::cout << std::endl;

    sort(array, 0, n-1);

    for (int i = 0; i < n; i++)
        std::cout << array[i] << ' ';
    std::cout << std::endl;


    return 0;
}

void sort(int array[], int start, int end)
{
	if(end > start)
	{
		int middle = (start + end) / 2;
		sort(array, start, middle);
		sort(array, middle + 1, end);
		merge(array, start, middle, middle+1, end);
	}
}

void merge (int array[], int start_1, int end_1, int start_2, int end_2)
{
    // Виконайте злиття відсортованих підмасивів, використовуючи допоміжний масив temp
    int i, j, k;
    int sizel = end_1 - start_1 + 1;
    int sizer = end_2 - start_2;

    //temp arrays
    int left[sizel], right[sizer];
    for (i = 0; i < sizel; i++)
        left[i] = array[start_1 + i];

    for (j = 0; j < sizer; j++)
        right[j] = array[start_2 + 1 + j];

    j = 0;
    j = 0;
    k = start_1;

    while (i < sizel && j < sizer){
        if (left[i] <= right[j])
        {
            array[k] = left[i];
            i++;
        }
        else
        {
            array[k] = right[j];
            j++;
        }
        k++;
    }

    while (j < sizel){
        array[k] = left[i];
        i++;
        k++;
    }

    while (j < sizer){
        array[k] = right[j];
        i++;
        k++;
    }


}