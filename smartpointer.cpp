// WHne using vector its best practise to declare the tentative size beforehead
// insert vs emplace
// when you use insert -> the object is created and then its copy is pushed to containier
// in emplace-> we dont have to construct object explicitely and no need to copy
// so n emplace the object is directly created in place in the container based on the value

// Smart pointer
//  we use the smart pointer so we can not have a memory leak
//  smart pointer is a template wrapper and we wrap the pointer in the class so we dont have to delete it explicitely
// the smart pointer is automatically deleted whne the distructor is invoked
//  following is the basic working of the smart pointers

// #include <iostream>

// using namespace std;

// template <class T>
// class SmartPointer
// {
// 	private:
// 		T* ptr_;
// 	public:
// 		SmartPointer(T* ptr = nullptr)
// 		{
// 			ptr_ = ptr;
// 		}
// 		~SmartPointer()
// 		{
// 			delete ptr_;
// 			ptr_ = nullptr;
// 		}
// 		T& operator*()
// 		{
// 			return *ptr_;
// 		}
// };

// int main()
// {
// 	SmartPointer<int> P(new int(5));
// 	cout<<*P;
// 	*P=7;
// 	cout<<*P;
// 	return 0;
// }

// Unique Pointer

// #include <iostream>
// #include <memory>

// using namespace std;

// class Check
// {
// private:
// 	int x_;
// 	int y_;
// public:
// 	Check(int x=0, int y=0):x_{x}, y_{y}{}
// 	int get_x()
// 	{
// 		return x_;
// 	}


// };

// int main()
// {
// 	unique_ptr<Check> p = make_unique<Check>(12,20);

// 	Check * obj_adr = p.get();
// 	// cout<<obj_adr;
// 	// cout<<p->get_x();

// 	unique_ptr<Check> p2 = move(p);
// 	Check * adr = p2.release();

// 	return 0;
// }

// Shared pointer
// in the shared pointer we also maintain the log of how many sharepointer objects are pointing to our pointer


#include <iostream>
#include <vector>
#include <string>

using namespace std;

class KidsData
{
private: 
	int age;
	string name;
public:
	KidsData(int a=0, string n="")
	{
		age =a;
		name =n;
	}
	int getAge()
	{
		return this->age;
	}
	string getname()
	{
		return this->name;
	}
	~KidsData()
	{

	}

};

int main()
{
	vector<KidsData*> v;
	KidsData* k1_adr = new KidsData(3,"wan");
	KidsData* k2_adr = new KidsData(4,"sur");
	KidsData* k3_adr = new KidsData(5,"sah");
	KidsData* k4_adr = new KidsData(6,"ulk");
	KidsData* k5_adr = new KidsData(7,"sha");

	v.push_back(k1_adr);v.push_back(k2_adr);v.push_back(k3_adr);v.push_back(k4_adr);v.push_back(k5_adr);

	for(auto it: v)
	{
		cout<<it->getAge()<<"\n";
	}

	auto it = v.begin();

	advance(it,3);

	v.erase(it);

		for(auto it: v)
	{
		cout<<it->getAge()<<"\n";
	}




	return 0;
}