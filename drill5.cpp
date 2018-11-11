#include "std_lib_facilities.h"

int main()
{
	int s=0;

	try
	{
		//1. Cout << "Success!\n";

		cout<< s++ << " Success!\n";

		//2. cout << "Success!\n;
		cout<< s++ << " Success!\n";

		//3. cout << "Success" << !\n"
		cout<< s++ << " Success"<<"!\n";

		//4. cout << success << '\n';
		cout<< s++ << " Success!"<<'\n';

		// 5. string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
		cout<<s++<<'. feladat\n';
		int res = 7; 
		vector<int> v(10); 
		v[5] = res; 
		cout << "Success!\n";

		// 6. vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";
		cout<<s++<<'. feladat\n';
		vector<int> v1(10); 
		v1[5] = 7; 
		if (v1[5]!=7) 
			{
				cout << "Success!\n";
			}
		// 7. if (cond) cout << "Success!\n"; else cout << "Fail!\n";
		cout<<s++<<'. feladat\n';
		bool cond=true;
			
		if (cond){ 
			cout << "Success!\n";
			} 
			else{
				cout << "Fail!\n"	
			} 


		// 8. bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
			cout<<s++<<'. feladat\n';
			bool c = false; 
			if (!c){
			 cout << "Success!\n"; 
			}
			else{ cout << "Fail!\n";
			}

		// 9. string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";
		cout<<s++<<'. feladat\n';
		string s = "ape";
		bool c = "fool"<s;
		if (c)
			{
				cout << "Success!\n";			
			}

		//10. string s = "ape"; if (s=="fool") cout << "Success!\n";

		cout<<s++<<'. feladat\n';	

		string s1 = "ape"; 
		if (s1!="fool") 
		{
			cout << "Success!\n";
		}

		// 11. string s = "ape"; if (s=="fool") cout < "Success!\n";

		cout<<s++<<'. feladat\n';

		string s2 = "ape"; 
		if (s2!="fool") 
		{
			cout << "Success!\n";
		}


		//12. string s = "ape"; if (s+"fool") cout < "Success!\n";

		cout<<s++<<'. feladat\n';

		string s3 = "ape"; 
		if (s3<"fool") 
		{
			cout << "Success!\n";
		}
		// 13. vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n";

		cout<<s++<<'. feladat\n';
		vector<char> v2(5);
		for (int i=0; i<v2.size(); ++i)
			cout << "Success!\n";

		//14. vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
		cout<<s++<<'. feladat\n';
		vector<char> v3(5);
		for (int i=0; i<v3.size(); ++i)
			cout << "Success!\n";

		//15. string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i];
		cout<<s++<<'. feladat\n';
		string s4 = "Success!\n"; 
		for (int i=0; i<s4.length(); ++i) 
			cout << s4[i];

		//16. if (true) then cout << "Success!\n"; else cout << "Fail!\n";
		cout<<s++<<'. feladat\n';

			if (true)
				{
					cout << "Success!\n";
				}
			else
			{
					cout << "Fail!\n";
			}
		//17. int x = 2000; char c = x; if (c==2000) cout << "Success!\n";
			cout<<s++<<'. feladat\n';
			int x1 = 2000; 
			char c1 = x; 
			if (c1!=2000)
			{
				cout << "Success!\n";	
			} 

		//18. string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];
		cout<<s++<<'. feladat\n';
		string s5 = "Success!\n"; 
		for (int i=0; i<s5.length(); ++i)
		{
			cout <<s[i];
		}

		//19. vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
		cout<<s++<<'. feladat\n';
		vector <int> v4(5); 
		for (int i=0; i<v.size(); ++i);
		{
			cout << "Success!\n";
		}

		// 20. int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";
		cout<<s++<<'. feladat\n';
		int i1=0; 
		int j = 9; 
		while (i<10)
		{
			++j;	
		}  
		if (j<i)
		{
			cout << "Success!\n";
		} 
			

		//21. int x = 2; double d = 5/(x–2); if (d==2*x+0.5) cout << "Success!\n";
		cout<<s++<<'. feladat\n';
		int x2 = 2;
		double d = 5/double(x2);
		if (d==2*x2+0.5)
		{
		 cout << "Success!\n";	
		}

		//22. string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];
		cout<<s++<<'. feladat\n';
		string s6 = "Success!\n"; 
		for (int i=0; i<=10; ++i)
		{
			cout << s[i];
		}

		//23. int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n";
		cout<<s++<<'. feladat\n';
		int i2=0;
		int j2=9; 
		while (i2<10){
			++i2;	
		}  
		if (j2<i2)
		{
		 cout << "Success!\n";
		}

		//24. int x = 4; double d = 5/(x–2); if (d=2*x+0.5) cout << "Success!\n";
		cout<<s++<<'. feladat\n';
		int x3 = 4; 
		double d = 5/double(x3–2); 
		if (d=2*x3+0.5)
		{
		 cout << "Success!\n";
		}

		//25. cin << "Success!\n";
		cout<<s++<<'. feladat\n';
		cin << "Success!\n";

		keep_window_open();
		return 0;		
	}

	catch(exception& e)
	{
		cerr<<"error: "<<e.what()<<'\n';
		keep_window_open();
		return 1;
	}
	catch(...)
	{
		cerr<<"Oops: unknown exception!\n";
		keep_window_open();
		return 2;
	}
}