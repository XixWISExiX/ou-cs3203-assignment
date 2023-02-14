#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int SumList(vector<int> v){
  int sum = 0;
  for(int i:v) sum+=i;
  return sum;

int main()
{
  vector<int> list = {1, 2, 3}
  printf("Sum of list = %d\n", SumList(list));
  return 0;
}