#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void showMatrix(const bool arr [][N]){
	for(int i = 0; i<N; i++){
		for(int j = 0;j<N;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

void inputMatrix(double inputarr [][N]){
	for(int i = 0;i<N;i++){
		cout<<"Row "<<i+1<<": ";
		for(int j = 0;j<N;j++){
			cin	>> inputarr [i][j];
		}
	}
}

void findLocalMax(const double in [][N], bool out [][N]){
	for(int i = 0; i<N; i++){
		for(int j = 0; j<N; j++){
			out[i][j] = 0;
			if(i>0 && j>0 && i<N-1 && j<N-1){
				if(in[i][j]>=in[i-1][j] && in[i][j]>=in[i][j+1] && in[i][j]>=in[i+1][j] && in[i][j]>=in[i][j-1])
				out[i][j] = 1;}
		}
	}
}