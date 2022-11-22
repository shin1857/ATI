//C++ 과제

//220627_Animal(나이비교함수)
//#include<iostream>
//#include<string>
//using namespace std;
//class Age
//{
//private:
//	int year;
//	int month;
//public:
//	Age(int y = 0, int m = 0) :year(y), month(m) {}
//	int getYear() { return year; }
//	int getMonth() { return month; }
//	void setYear();
//	void setMonth();
//
//	void Print() { cout << year << ", " << month << endl; }
//};
//class Animal
//{
//protected:
//	string name;
//	Age age;
//	int gender;
//	string type;
//public:
//	Animal(const string& n = "", Age a = Age(0, 0), int g = 0, const string& t = "") :name(n), age(a), gender(g), type(t) {}
//	string getName() { return name; }
//	Age getage() { return age; }
//	int getGender() { return gender; }
//	string getType() { return type; }
//
//	void PrintInfo() { cout << name << gender << type << endl; }
//	int getGender() { if (gender == 1) return 'male'; }
//	void CompareAge() {}
//};
//int ComparAge(Age age1, Age age2)  
//{
//	int year1 = age1.getYear(), year2 = age2.getYear();
//	int month1 = age1.getMonth(), month2 = age2.getMonth();
//	if (year1 > year2)
//	{
//		cout << "나이가 많은 동물은: age1 ";
//		return 1;
//	}
//	else if (year1 < year2)
//	{
//		cout << "나이가 많은 동물은: age2 ";
//		return 0;
//	}
//	else if (year1 == year2)
//	{
//		if (month1 > month2)
//		{
//			cout << "나이가 많은 동물은: age1 ";
//			return 1;
//		}
//		else if (month1 < month2)
//		{
//			cout << "나이가 많은 동물은: age2 ";
//			return 0;
//		}
//		else if (month1 == month2)
//		{
//			cout << "둘의 나이는 같습니다 ";
//			return 2;
//		}
//	}
//}

//220627_Animal
//#include<iostream>
//
//using namespace std;
//
//struct ISound
//{
//	virtual void GetSound()const = 0;
//};
//struct ISpawnEgg
//{
//	virtual void GetSpawnEgg()const = 0;
//};
//class Age
//{
//	int year;
//	int month;
//public:
//	Age(int y = 0, int m = 0) :year(y), month(m) {}
//	int GetYear()const { return year; }
//	int GetMonth()const { return month; }
//	void SetYear(int y) { year = y; }
//	void SetMonth(int m) { month = m; }
//
//	void Print()
//	{
//		cout << year << "살" << month << "개월";
//	}
//};
//class Animal
//{
//private:
//	string name;
//	Age age;
//	int gender;
//public:
//	Animal(const string& n = "", Age a = Age(0, 0), int g = 0, const string& t = "") :name(n), age(a), gender(g) {}
//	string getName() { return name; }
//	Age getAge() { return age; }
//	int getGender()
//	{
//		if (gender)
//			cout << "Male";
//		else
//			cout << "Female";
//	}
//
//	void PrintInfo()
//	{
//		cout << name << endl;
//		age.Print();
//		cout << gender << endl;
//		cout << endl;
//	}
//	virtual ~Animal() {}
//};
//class 개 : public Animal, public ISound
//{
//public:
//	개(const string& n = "", Age a = Age(0, 0), int g = 0, const string& t = "") :Animal(n, a, g, t) {}
//	void GetSound()const { cout << "멍멍" << endl; }
//};
//class 고양이 : public Animal, public ISound
//{
//public:
//	고양이(const string& n = "", Age a = Age(0, 0), int g = 0, const string& t = "") :Animal(n, a, g, t) {}
//	void GetSound()const { cout << "야옹" << endl; }
//};
//class 도마뱀 : public Animal, public ISpawnEgg
//{
//public:
//	도마뱀(const string& n = "", Age a = Age(0, 0), int g = 0, const string& t = "") :Animal(n, a, g, t) {}
//	void GetSpawnEgg()const { cout << "알을 낳는다" << endl; }
//};
//class 참새 : public Animal, public ISound, public ISpawnEgg
//{
//public:
//	참새(const string& n = "", Age a = Age(0, 0), int g = 0, const string& t = "") :Animal(n, a, g, t) {}
//	void GetSound()const { cout << "짹짹" << endl; }
//	void GetSpawnEgg()const { cout << "알을 낳는다" << endl; }
//};
//int main()
//{
//	Animal* sarr[4] = { new 개("dog", Age(3,0), 1), new 고양이("dog", Age(0,3), 1), new 도마뱀("dog", Age(0,0), 1), new 참새("dog", Age(0,0), 1) };
//
//	cout << endl;
//	ISound* sound[3] = { (개*)sarr[0], (고양이*)sarr[1], (참새*)sarr[3] };
//
//	cout << endl;
//	ISpawnEgg* egg[2] = { (도마뱀*)sarr[2], (참새*)sarr[3] };
//}

//220630_매트릭스
//#include<iostream>
//#include<string>
//#include<cstring>
//using namespace std;
//class Matrix
//{
//	int* matrix;
//	int row;
//	int col;
//public:
//	Matrix(int _row = 0, int _col = 0) :matrix(nullptr), row(_row), col(_col)
//	{
//		matrix = new int[_row * _col];
//		for (int i = 0; i < row; ++i)
//		{
//			for (int j = 0; j < col; ++j)
//			{
//				matrix[(col * i) + j] = 0;
//			}
//		}
//	}
//	Matrix(int _matrix[], int _row = 0, int _col = 0) :matrix(nullptr), row(_row), col(_col)
//	{
//		matrix = new int[_row * _col];
//		for (int i = 0; i < row; ++i)
//		{
//			for (int j = 0; j < col; ++j)
//			{
//				matrix[(col * i) + j] = _matrix[(col * i) + j];
//			}
//		}
//	}
//	Matrix(const Matrix& arg) :matrix(nullptr), row(arg.row), col(arg.col)
//	{
//		matrix = new int[arg.row * arg.col];
//		row = arg.row;
//		col = arg.col;
//		for (int i = 0; i < arg.row; ++i)
//		{
//			for (int j = 0; j < arg.col; ++j)
//			{
//				matrix[(arg.col * i) + j] = arg.matrix[(arg.col * i) + j];
//			}
//		}
//	}
//	~Matrix() { cout << "~Matrix" << endl;  delete[] matrix; }
//	int* Getmatrix()const
//	{
//		return matrix;
//	}
//	int Getrow()const
//	{
//		return row;
//	}
//	int Getcol()const
//	{
//		return col;
//	}
//	int GetElement(int _row, int _col)const
//	{
//		return matrix[(col * (_row - 1)) + _col - 1];
//	}
//	void Setmatrix(int _matrix[], int size)
//	{
//
//		if (row * col != size)
//			throw 1;
//
//		for (int i = 0; i < row; ++i)
//		{
//			for (int j = 0; j < col; ++j)
//			{
//				matrix[(col * i) + j] = matrix[(col * i) + j] + _matrix[(col * i) + j];
//			}
//		}
//	}
//	void SetElement(int data, int _row, int _col)
//	{
//		if (row < _row || col < _col)
//		{
//			throw 1;
//		}
//		matrix[(col * (_row - 1)) + _col - 1] = data;
//	}
//	void Setrow(int _row)
//	{
//		row = _row;
//	}
//	void Setcol(int _col)
//	{
//		col = _col;
//	}
//	void Print()
//	{
//		for (int i = 0; i < row; ++i)
//		{
//
//			for (int j = 0; j < col; ++j)
//			{
//				cout << matrix[(col * i) + j] << " ";
//			}
//			cout << endl;
//		}
//		cout << endl;
//	}
//	bool operator==(const Matrix& arg)const
//	{
//		return this == &arg;
//	}
//	bool operator!=(const Matrix& arg)const
//	{
//		return !(*this == arg);
//	}
//	const Matrix& operator=(const Matrix& arg)
//	{
//		if (*this == arg)
//			return*this;
//		delete[] matrix;
//		int size = arg.col * arg.row;
//		matrix = new int[size];
//		row = arg.row;
//		col = arg.col;
//		for (int i = 0; i < arg.row; ++i)
//		{
//			for (int j = 0; j < arg.col; ++j)
//			{
//				matrix[(arg.col * i) + j] = arg.matrix[(arg.col * i) + j];
//			}
//		}
//		return *this;
//	}
//	const Matrix operator+(const Matrix& arg)
//	{
//		if (row == arg.row && col == arg.col)
//		{
//			for (int i = 0; i < arg.row; ++i)
//				for (int j = 0; j < arg.col; ++j)
//					matrix[(arg.col * i) + j] = matrix[(arg.col * i) + j] + arg.matrix[(arg.col * i) + j];
//		}
//		else
//			throw 1;
//		return *this;
//	}
//	const Matrix operator-(const Matrix& arg)
//	{
//		if (row == arg.row && col == arg.col)
//		{
//			for (int i = 0; i < arg.row; ++i)
//				for (int j = 0; j < arg.col; ++j)
//					matrix[(arg.col * i) + j] = matrix[(arg.col * i) + j] - arg.matrix[(arg.col * i) + j];
//		}
//		else
//			throw 1;
//		return *this;
//	}
//	const Matrix operator*(const Matrix& arg)
//	{
//		if (col == arg.row && row == arg.col)
//		{
//			Matrix tempMatrix(row, arg.col);
//			//mtrix.matrix;
//
//			for (int p = 0; p < row; ++p)
//			{
//				for (int i = 0; i < arg.col; ++i)
//				{
//					for (int j = 0; j < col; ++j)
//					{
//						tempMatrix.matrix[(arg.col * p) + i] = tempMatrix.matrix[(arg.col * p) + i] + (matrix[(col * p) + j] * arg.matrix[(arg.col * j) + i]);
//					}
//				}
//			}
//
//			return tempMatrix;
//		}
//		else
//			throw 1;
//	}
//
//};
//void MMUL(const Matrix& arg, const Matrix& arg2, Matrix& arg3)
//{
//	if (arg.Getcol() == arg2.Getrow() && arg.Getrow() == arg2.Getcol())
//	{
//		int size = arg2.Getcol() * arg.Getrow();
//		arg3.Setcol(arg2.Getcol());
//		arg3.Setrow(arg.Getrow());
//
//		Matrix tempMatrix(arg.Getrow(), arg2.Getcol());
//
//
//		//mtrix.matrix;
//
//		for (int p = 0; p < arg.Getrow(); ++p)
//		{
//			for (int i = 0; i < arg2.Getrow(); ++i)
//			{
//				for (int j = 0; j < arg2.Getcol(); ++j)
//				{
//					tempMatrix.Getmatrix()[(arg2.Getcol() * p) + i] = tempMatrix.Getmatrix()[(arg2.Getcol() * p) + i] + (arg.Getmatrix()[(arg2.Getcol() * p) + j] * arg2.Getmatrix()[(arg2.Getcol() * j) + i]);
//				}
//			}
//		}
//
//		arg3 = tempMatrix;
//	}
//	else
//		throw 1;
//
//}
//int main()
//{
//	int n[3] = { 2,2,2 };
//	Matrix arr1(3, 1);
//	Matrix arr2(1, 3);
//	Matrix arr3(1, 1);
//	arr1.Setmatrix(n, 3);
//	arr2.Setmatrix(n, 3);
//	arr1.Print();
//	arr2.Print();
//	arr3.Print();
//
//	arr3 = arr1 * arr2;
//	arr3.Print();
//
//}

//220705_생일(vector)
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Person
//{
//	string name;
//	int year;
//	int month;
//	int day;
//public:
//	Person(const string& n = "", const int y = 0, const int m = 0, const int d = 0) :name(n), year(y), month(m), day(d) {}
//	void Print() const { cout << name << "," << year << "," << month << "," << day << endl; }
//	const string& GetName()const { return name; }
//	int GetYear()const { return year; }
//	int GetMonth()const { return month; }
//	int GetDay()const { return day; }
//};
//struct Compare
//{
//	bool operator()(const Person& a, const Person& b)const
//	{
//		if (a.GetYear() > b.GetYear())
//			return true;
//		else if (a.GetYear() < b.GetYear())
//			return false;
//		else if (a.GetMonth() > b.GetMonth())
//			return true;
//		else if (a.GetDay() > b.GetDay())
//			return true;
//		else
//			return false;
//	}
//};
//int main()
//{
//	vector<Person>v;
//
//	v.push_back(Person("A", 93, 01, 01));
//	v.push_back(Person("B", 93, 03, 01));
//	v.push_back(Person("C", 93, 04, 01));
//	v.push_back(Person("D", 93, 05, 01));
//	v.push_back(Person("E", 93, 06, 01));
//
//	sort(v.begin(), v.end(), Compare());
//	for (vector<Person>::iterator iter = v.begin(); iter != v.end(); ++iter)
//	{
//		cout << iter->GetName() << "," << iter->GetYear() << "," << iter->GetMonth() << "," << iter->GetDay() << " ";
//	}
//	cout << endl;
//}

//220705_Point나열
//#define _USE_MATH_DEFINES
////M_PI			//파이
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Point
//{
//	int x, y;
//	int distance;
//public:
//	explicit Point(int x = 0, int y=0):x(x),y(y) {}
//	void Print() const { cout << x << "," << y << endl; }
//	int GetX()const { return x; }
//	int GetY()const { return y; }
//	//int GetDistance(int a = 0, int b = 0)const { return sqrt((x * x) + (y * y)); }
//	int GetDistance(int a = 0, int b = 0)const { return sqrt((x - a) * (x - a) + (y - b) * (y - b)); }
//};
//struct Compare
//{
//private:
//	int x, y;
//public:
//	Compare(int x=0,int y=0):x(x),y(y){}
//	bool operator()(const Point& a, const Point& b)const
//	{
//		if (a.GetDistance(x,y) < b.GetDistance(x,y))
//			return true;
//		else
//			return false;
//	}
//};
//int main()
//{
//	vector<Point> v;
//
//	v.push_back(Point(2, 6));
//	v.push_back(Point(3, 5));
//	v.push_back(Point(2, 3));
//	v.push_back(Point(1, 4));
//	v.push_back(Point(4, 8));
//
//	sort(v.begin(), v.end(), Compare(3,5));
//	for (vector<Point>::iterator iter = v.begin(); iter != v.end(); ++iter)
//	{
//		cout << iter->GetX() << "," << iter->GetY() << " ";
//	}
//	cout << endl;
//}

//220719_Container
//#pragma warning(disable: 26451)
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//    int n;  //사람수 
//    int gun;
//    int startNum = 1;
//
//    cin >> n;
//    cin >> gun;
//    vector<int>people;
//    vector<int>dead;
//    vector<int>people2;
//
//    for (int i = 1; i <= n; ++i)
//    {
//        people.push_back(i);
//    }
//
//    for (int i = startNum; i <= n; ++i)
//    {
//        dead.push_back(*(people.begin() + ((gun - 1) % people.size())));  
//        people.erase(people.begin() + (gun - 1) % people.size());    
//        people2.clear();    
//
//        for (int j = 0; j < people.size(); ++j)
//        {
//            people2.push_back(*(people.begin() + ((gun - 1 + j) % people.size())));      
//        }
//
//        people.clear();    
//        people = people2;   
//    }
//
//    for (int i = 0; i < dead.size(); ++i)     
//    {
//        cout << dead[i];
//    }
//}

