//�ڶ��֣��º�����Ӧ�ã����ʱ��ṹ����û��ֱ�ӵ�С�ں����أ�����˵��

#include <iostream>

#include <map>

#include <string>

using namespace std;

typedef struct tagStudentinfo
{
	int      niD;
	string   strName;
}Studentinfo; //ѧ����Ϣ



class sort
{
public:
	bool operator() (Studentinfo const &_A, Studentinfo const &_B) const
	{
		if (_A.niD < _B.niD)
			return true;
		if (_A.niD == _B.niD)
			return _A.strName.compare(_B.strName) < 0;
		return false;
	}

};



int main()



{   //��ѧ����Ϣӳ�����



	map<Studentinfo, int, sort>mapStudent;



	map<Studentinfo, int>::iterator iter;



	Studentinfo studentinfo;



	studentinfo.niD = 1;



	studentinfo.strName = "student_one";



	mapStudent.insert(pair<Studentinfo, int>(studentinfo, 90));



	studentinfo.niD = 2;



	studentinfo.strName = "student_two";



	mapStudent.insert(pair<Studentinfo, int>(studentinfo, 80));



	for (iter = mapStudent.begin(); iter != mapStudent.end(); iter++)



		cout << iter->first.niD << ' ' << iter->first.strName << ' ' << iter->second << endl;

}
