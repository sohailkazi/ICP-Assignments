#include <stdio.h>
#include <math.h>
#include "random.h"

double mean(unsigned int arr[], int n)
{	
	double ans = 0;
	for(int i = 0; i < n; i++)
		ans += arr[i];
	ans /= n;
	return ans;
}

double variance(unsigned int arr[], int n, double mean)
{
	double ans = 0;
	for(int i = 0; i < n ; i++)
		ans += (arr[i] - mean) * (arr[i] - mean);
	ans /= n;
	return ans;
}

void main()
{
	int n;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	unsigned int arr[n];
	
	for(int i = 0; i < n; i++)
		arr[i]=random32();
		
	double a_mean = mean(arr, n);
	double var = variance(arr, n, a_mean);
	double std_dev =sqrt(var);
	printf("Mean: %.2f\n", a_mean);
	printf("Variance: %.2f\n", var);
	printf("Standard Deviation: %.2f\n",std_dev);
}