#include<iostream>
#include<cstring>		// strcpy(), strcmp() 등...

using namespace std;

int main()
{
	// '\0' //
	char mystring[255];

	cin >> mystring;

	cout << mystring << endl;	// mystring 출력

	mystring[4] = '\0';			// [4]에 '\0'을 대입		*** '\0'을 만나면 그 앞까지만 읽음

	cout << mystring << endl;	// mystring 중에서 [0]~[3] 까지만 출력		([4]에서 \0을 만나므로) 



	// 문자열을 복사해서 넣어주는 함수 strcpy_s( , , )
	char source[] = "Copy this!";
	char dest[50];

	strcpy_s(dest, 50, source);		// strcpy_s(dest,dest배열크기,source) source의 문자열을 dest에 복사에 붙여넣기

	cout << source << endl;
	cout << dest << endl;

	// 문자열이 같은지 다른지 판별하는 함수 strcmp( , )
	char x[] = "hello";
	char y[] = "hello";
	char z[] = "Hi";
	// 문자열이 같은지와 문자열의 아스키 코드 크기에 따라서 -1,0,1 이 출력된다.
	cout << strcmp(x, y) << endl;		// 문자열이 같으면 0 을 출력
	cout << strcmp(x, z) << endl;		// 문자열이 다르고 문자열1이 문자열2보다 클  1 출력
	cout << strcmp(z, x) << endl;		// 문자열이 다르고 문자열1이 문자열2보다 작을 때 -1 출력

	return 0;
}