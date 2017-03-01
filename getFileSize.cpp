//Usage: Get large files' size, up to 2^64 = (2^34)G !!

#include <iostream>
#include <sys\stat.h>
using namespace std;

unsigned long long getFileSize( char * filename )
{
    unsigned long long size;
    struct __stat64 st;

    __stat64( filename, &st );
    size = st.st_size;

   return size;

}//get_File_Size

void main(int argc, char * argv[])
{
	unsigned long long size = getFileSize(argv[1]);
	cout<<"The file size is : "<<size<<" bytes"<<endl;
	system("pause");
}