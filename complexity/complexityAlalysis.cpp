#include<iostream>
using namespace std;
int sum_in_range(int x, int y){
	int result=0;

	for(int i=x;i<=y;i++){
		result+=i;
	}
	return result;
}

int sum_in_range_optimize(int x,int y){
	int n=(y-x+1);
	int a=x;
	int result=(n*(2*a + (n-1)*1))/2;
	return result;
}
int main()
{
	cout<<sum_in_range_optimize(1,200000);
	return 0;
}