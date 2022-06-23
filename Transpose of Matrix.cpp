#include <iostream>
using namespace std;
const int arraySize = 5;

void readMatrix(int arr[][arraySize]);
void displayMatrix(int a[][arraySize]);
void transposeMatrix(int a[][arraySize]);

int main()
{
	int a[arraySize][arraySize];
	//Read matrix elements into the array
	readMatrix(a);
	// Display the matrix
    cout << "\n\n" << "The original matrix is: " << '\n';
    displayMatrix(a); 
	//Transpose the matrix
	transposeMatrix(a);
	//Display the transposed matrix
	cout<<"\n\n"<<"The transposed matrix is: "<<"\n";
	displayMatrix(a);
}
void readMatrix(int a[][arraySize])
{
	int row,col;
	for(row = 0; row<arraySize;row++)
	{
		for(col = 0; col<arraySize; col++)
		{
			cout << "\n" << "Enter " << row << ", " << col << " element: ";
			cin >> a[row][col]; 
		}
		cout<<"\n";
	}
}
void displayMatrix(int a[][arraySize])
{
	int row,col;
	for(row = 0; row<arraySize;row++)
	{
		for(col = 0; col<arraySize; col++)
		{
			cout<<a[row][col]<<"\t"; 
		}
		cout<<"\n";
    }
}
void transposeMatrix(int a[][arraySize])
{
 int row, col;
 int temp;
 for (row = 0; row < arraySize; row ++)
 {
 	for (col = row; col < arraySize; col ++) 
 	{
 		temp = a[row][col];
 		a[row][col] = a[col][row];
 		a[col][row] = temp;
	 }
 }
}


