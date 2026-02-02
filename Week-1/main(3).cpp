#include <iostream>
#include<vector>
using namespace std;
int main()
{
   vector<int> num= {1,8,5,6,7,9,4,6};
   cout<<"Size of vector is " << num.size()<<endl;
   for(int i=0;i<num.size();i++){
       cout<<num.at(i)<<endl;
   }
   num.push_back(40);
   num.push_back(67);
   num.push_back(11);
   num.push_back(54);
   num.push_back(38);
    cout<<"Size of vector is " << num.size()<<endl;
   for(int i=0;i<num.size();i++){
       cout<<num.at(i)<<endl;
   }

    

    return 0;
}