#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//struct Point {
//	int x;
//	int y;
//};


//class Student {
//	string name;
//	int age;
//	int* marks;
//	int countMarks;
//
//public:
//	Student()
//	{
//		this->name = "no name";
//		this->age = 0;
//		this->marks = nullptr;
//		this->countMarks = 0;
//	}
//	Student(string name,int age)
//	{
//		this->name = name;
//		this->age = age;
//		this->marks = nullptr;
//		this->countMarks = 0;
//	}
//
//	Student(const Student &other)
//	{
//		this->name = other.name;
//		this->age = other.age;
//		this->countMarks = other.countMarks;
//
//		this->marks = new int[countMarks];
//		for (int i = 0; i < countMarks; i++)
//		{
//			this->marks[i] = other.marks[i];
//
//		}
//	}
//
//	~Student() {
//		if (marks != nullptr)
//				{
//					delete[]marks;
//				}
//	}
//
//	void print() {
//		cout << "name: " << name<<endl;
//		cout << "age: " << age<<endl;
//		cout << "countMarks: " << countMarks<<endl;
//		cout << "marks: " <<endl;
//		for (int i = 0; i < countMarks; i++)
//		{
//			cout << marks[i] << " ";
//		}
//		cout << endl;
//	}
//
//	void addMark(int mark) {
//		int* temp = new int[countMarks + 1];
//		for (int i = 0; i < countMarks; i++)
//		{
//			temp[i] = marks[i];
//		}
//		temp[countMarks] = mark;
//		if (marks!=nullptr)
//		{
//			delete[]marks;
//		}
//		marks = temp;
//		countMarks++;
//	}
//};
// 
//1
// 
//class Array {
//	long* arr;
//	int size;
//public:
//	Array()
//	{
//		arr = nullptr;
//		size = 0;
//	}
//	Array(int size)
//	{
//		this->size = size;
//		arr = new long[size] {};
//	}
//
//
//	Array(const Array& other)
//			{
//				this->size = other.size;
//		
//				this->arr = new long[size];
//				for (int i = 0; i < size; i++)
//				{
//					this->arr[i] = other.arr[i];
//		
//				}
//			}
//
//
//	void print() {
//		cout << "size: " << size << endl;
//		cout << "arr: ";
//		for (int i = 0; i < size; i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//		if (arr == nullptr)
//				{
//			cout << "array is empty" << endl;;
//				}
//	}
//
//	void randomFill() {
//		for (int i = 0; i < size; i++)
//		{
//			arr[i] = rand() % 100;
//		}
//		cout << endl;
//	}
//
//	void fillFromKeyboard() {
//		for (int i = 0; i < size; i++)
//		{
//			cin >> arr[i];
//		}
//		cout << endl;
//	}
//
//	void fillByDefault() {
//		for (int i = 0; i < size; i++)
//		{
//			arr[i] = 0;
//		};
//	}
//
//	void addOneEl(long value) {
//		long* temp = new long[size + 1];
//				for (int i = 0; i < size; i++)
//				{
//					temp[i] = arr[i];
//				}
//				temp[size] = value;
//				if (arr!=nullptr)
//				{
//					delete[]arr;
//				}
//				arr = temp;
//				size++;
//	}
//
//	void deleteByInd(int index) {
//		if (index<0 or index>=size)
//		{
//			cout << "error" << endl;
//		}
//		long* toDelete = new long[size-1];
//		int j = 0;
//		for (int i = 0; i < size; i++)
//		{
//			if (i!=index)
//			{
//				toDelete[j]=arr[i];
//				j++;
//			}
//		}
//		delete[]arr;
//		arr = toDelete;
//		size--;
//	}
//	void deleteByValue(int value) {
//		int index = -1;
//
//		for (int i = 0; i < size; i++)
//		{
//			if (arr[i]==value)
//			{
//				index = i;
//				break;
//			}
//		}
//		if (index==-1)
//		{
//			cout << "value not found" << endl;
//			return;
//		}
//		deleteByInd(index);
//	}
//
//	void sortSmallToBig() {
//		for (int i = 0; i < size-1; i++)
//		{
//			for (int j = 0; j < size-1-i; j++)
//			{
//				if (arr[j]>arr[j+1])
//				{
//					long temp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = temp;
//				}
//			}
//		}
//	}
//	void sortBigToSmall() {
//		for (int i = 0; i < size-1; i++)
//		{
//			for (int j = 0; j < size-1-i; j++)
//			{
//				if (arr[j]<arr[j+1])
//				{
//					long temp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = temp;
//				}
//			}
//		}
//	}
//
//	void findMin() {
//		int min = arr[0];
//		for (int i = 0; i < size; i++)
//		{
//			if (arr[i]<min)
//			{
//				min = arr[i];
//			}
//		}
//		cout << "minimal num is: " << min << endl;
//	}
//	void findMax() {
//		int max = arr[0];
//		for (int i = 0; i < size; i++)
//		{
//			if (arr[i]>max)
//			{
//				max = arr[i];
//			}
//		}
//		cout << "maximum num is: " << max << endl;
//	}
//
//	void findArif() {
//		if (arr==0)
//		{
//			cout << "array is empty" << endl;
//			return;
//		}
//		float suma = 0;
//		for (int i = 0; i < size; i++)
//		{
//			suma+=arr[i];
//		}
//
//		cout << "arif= " << suma / size << endl;
//	}
//
//	~Array() {
//
//		delete[]arr;
//	}
//};

//2


struct Vagon {
	int vagonNumber;
	int seats;
	int passengers;
};

class Train {

	string model;
	int vagonAmount;

	Vagon* vagons;
public:
	Train()
	{
		model = "no model";
		vagonAmount = 0;
		vagons = nullptr;
	}
	Train(string model, int vagonAmount, Vagon* vagons)
	{
		this->model = model;
		this->vagonAmount = vagonAmount;

		this->vagons = new Vagon[vagonAmount];
		for (int i = 0; i < vagonAmount; i++)
		{
			this->vagons[i] = vagons[i];
		}
	}

	void show() {
		cout << "model: " << model << endl;
		cout << "amount of vagons: " << vagonAmount << endl;
		for (int i = 0; i < vagonAmount; i++)
		{
			cout << "vagon " << i + 1 << endl;
			cout << "number of the vagon: " << vagons[i].vagonNumber << endl;
			cout << "seats: " << vagons[i].seats << endl;
			cout << "passengers: " << vagons[i].passengers << endl;
		}
	}

	void addVagon(int number,int seats,int passengers ) {
		Vagon* temp = new Vagon[vagonAmount + 1];
						for (int i = 0; i < vagonAmount; i++)
						{
							temp[i] = vagons[i];
						}
						temp[vagonAmount].vagonNumber = number;
						temp[vagonAmount].seats = seats;
						temp[vagonAmount].passengers = passengers;
						
						delete[]vagons;
						vagons = temp;
						vagonAmount++;
	}

	void addPassangerToVagon(int index) {
		if (index<0 or index>=vagonAmount)
		{
			cout << "vagon not found" << endl;
			return;
		}
		if (vagons[index].passengers>=vagons[index].seats)
		{
			cout << "there are no seats" << endl;
			return;
		}
		vagons[index].passengers++;
	}

	Train(const Train& other)
			{
				this->model = other.model;
				this->vagonAmount = other.vagonAmount;
				if (vagonAmount>0)
				{
					vagons = new Vagon[vagonAmount];

					for (int i = 0; i < vagonAmount; i++)
					{
						vagons[i] = other.vagons[i];
					}
				}
				else
				{
					vagons = nullptr;
				}
			}

	~Train() {
		delete[] vagons;
	}
};

int main()
{
	//2
	Vagon vagons[3] = {
		{1,30,20},
		{2,40,30},
		{3,30,20},
	};
	Train t;
	Train t1("4rr", 3,vagons);
	t1.addVagon(4, 3, 1);
	t1.addPassangerToVagon(3);
	t1.show();
	cout << endl;
	cout << endl;
	Train copy=Train(t1);
	cout << "original " << endl;
	t1.show();
	cout << "copy " << endl;
	cout << endl;
	cout << endl;
	copy.show();

	//1

	//srand(time(0));

	//Array arr;
	//Array arr1(4);
	////arr1.randomFill();
	////arr1.fillByDefault();
	//arr1.fillFromKeyboard();
	//arr1.addOneEl(8);
	////arr1.deleteByInd(0);
	////arr1.deleteByValue(1);
	////arr1.sortSmallToBig();
	////arr1.sortBigToSmall();
	////arr1.findMin();
	////arr1.findMax();
	//arr1.findArif();

	//arr1.print();

	////Array copy=Array(arr1);
	////cout << "original " << endl;
	////arr1.print();
	////cout << "copy " << endl;
	////copy.print();








	//Student st;
	//st.print();
	//Student st2("yura", 18);
	//st2.addMark(9);
	//st2.addMark(10);
	//st2.addMark(7);
	//st2.print();

	//Student copy=Student(st2);
	//cout << "original " << endl;
	//st2.print();
	//cout << "copy " << endl;
	//copy.print();


	//Point point(15, 25);

	//int a;
	//int b=10;
	//int c=3.33;
	//int* ptr;
	//cout << b << endl;
	//cout << c << endl;

	//int numbers[2];
	//numbers[0] += 2;
	//cout << numbers[0] << endl;

	//int num = 2;//initisaliztion with copying
	//int value(2.2);//straight initialization
	//int size{ 33 };//unificated initialization

	//cout << num << endl;
	//cout << value << endl;
	//cout << size << endl;

	//int answer{ 5 };//same as answer=5;

	//const float goodTemp{ 36.6 };
	//int marks[3]{ 1,4,7 };
	//int matrix[2][2]{ {1,2},{3,4} };
	//int* dataPtr{ nullptr };
}


