#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int SumList(vector<int> v){
  int sum = 0;
  for(int i:v) sum+=i;
  return sum;
}
int ProductList(vector<int> v){
  int sum = 1;
  for(int i:v) sum*=i;
  return sum;
}
int main()
{
  vector<int> list = {2, 2, 3};
  printf("Sum of list = %d\n", SumList(list));
  printf("Product of list = %d\n", ProductList(list));
  return 0;
}