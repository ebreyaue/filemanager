#include <iostream>
#include <cstdlib>
#include <string>
#include <dirent.h>
#include <limits.h>
using namespace std;
#include "filepath.h"


int main()
{
string path;
cin>>path;
cout<<get_files(path)<<endl;
}