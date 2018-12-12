#include "Classroom.h"
#include "CNode.h"
#include "MyGraph.h"
#include "CSVRow.h"
#include<iostream>
#include<fstream>

using namespace std;



int main()
{
	//�׷��� ����
	MyGraph myGraph;
	vector<string> path;


	//pair<�׿�, ž��>
	//�׿� = up or down �߻��ο� - ���������� ���� �ο�
	map<string,pair<int, int>> result;
	
	//1������ 7���� �������� �� �̿밡���� ���������͵��� ���ð�
	//day = 2, time = 44
	
	//�� ��ȯ

	myGraph.setNumOfElv();

	int sumOfRemain = 0;
	double floors[18];
	for (int i = 0; i < 18; i++) {
		floors[i] = 0;
	}
	int checker = -1;	//1 ����, -1 ����
	int UpDown = 1;	    //0: ���� 1: ����

	



		ofstream savingFile;
		savingFile.open("Mon.csv");
		savingFile << "TIME\\Elv,elv1,elv2,elv3,elv4,elv5,elv6,elv7,elv8,elv9,elv10,\n";
		//file i ����
		for (int k = 0; k < 60; k++) {
			MyGraph::setDay(0);
			MyGraph::setTime(k);
			//cout << "Day: " << 0 << "Time: " << k << endl;
			result = myGraph.Mode2(-5, 12, checker);
			stringstream buffer; 
			buffer << k ;
			for (map<string, pair<int, int>>::iterator iter = result.begin(); iter != result.end(); iter++) {
				//cout << iter->first << endl;	//���������� �̸�
				//cout << "���������� ž�� ���� �ο�: " << iter->second.first << "  ���������� �׿� �ο�: " << iter->second.second << endl;
				buffer << "," << iter->second.second;
				sumOfRemain += iter->second.second;
			}
			buffer << ",\n";
			string ss= buffer.str();
			savingFile << ss;
		}
		savingFile.close();

		savingFile.open("Tue.csv");
		savingFile << "TIME\\Elv,elv1,elv2,elv3,elv4,elv5,elv6,elv7,elv8,elv9,elv10,\n";
		//file i ����
		for (int k = 0; k < 60; k++) {
			MyGraph::setDay(1);
			MyGraph::setTime(k);
			//cout << "Day: " << 0 << "Time: " << k << endl;
			result = myGraph.Mode2(-5, 12, checker);
			stringstream buffer;
			buffer << k;
			for (map<string, pair<int, int>>::iterator iter = result.begin(); iter != result.end(); iter++) {
				//cout << iter->first << endl;	//���������� �̸�
				//cout << "���������� ž�� ���� �ο�: " << iter->second.first << "  ���������� �׿� �ο�: " << iter->second.second << endl;
				buffer << "," << iter->second.second;
				sumOfRemain += iter->second.second;
			}
			buffer << ",\n";
			string ss = buffer.str();
			savingFile << ss;
		}
		savingFile.close();

		
		savingFile.open("Wed.csv");
		savingFile << "TIME\\Elv,elv1,elv2,elv3,elv4,elv5,elv6,elv7,elv8,elv9,elv10,\n";
		//file i ����
		for (int k = 0; k < 60; k++) {
			MyGraph::setDay(2);
			MyGraph::setTime(k);
			//cout << "Day: " << 0 << "Time: " << k << endl;
			result = myGraph.Mode2(-5, 12, checker);
			stringstream buffer;
			buffer << k;
			for (map<string, pair<int, int>>::iterator iter = result.begin(); iter != result.end(); iter++) {
				//cout << iter->first << endl;	//���������� �̸�
				//cout << "���������� ž�� ���� �ο�: " << iter->second.first << "  ���������� �׿� �ο�: " << iter->second.second << endl;
				buffer << "," << iter->second.second;
				sumOfRemain += iter->second.second;
			}
			buffer << ",\n";
			string ss = buffer.str();
			savingFile << ss;
		}
		savingFile.close();

		
		savingFile.open("Thr.csv");
		savingFile << "TIME\\Elv,elv1,elv2,elv3,elv4,elv5,elv6,elv7,elv8,elv9,elv10,\n";
		//file i ����
		for (int k = 0; k < 60; k++) {
			MyGraph::setDay(3);
			MyGraph::setTime(k);
			//cout << "Day: " << 0 << "Time: " << k << endl;
			result = myGraph.Mode2(-5, 12, checker);
			stringstream buffer;
			buffer << k;
			for (map<string, pair<int, int>>::iterator iter = result.begin(); iter != result.end(); iter++) {
				//cout << iter->first << endl;	//���������� �̸�
				//cout << "���������� ž�� ���� �ο�: " << iter->second.first << "  ���������� �׿� �ο�: " << iter->second.second << endl;
				buffer << "," << iter->second.second;
				sumOfRemain += iter->second.second;
			}
			buffer << ",\n";
			string ss = buffer.str();
			savingFile << ss;
		}
		savingFile.close();

		
		savingFile.open("Fri.csv");
		savingFile << "TIME\\Elv,elv1,elv2,elv3,elv4,elv5,elv6,elv7,elv8,elv9,elv10,\n";
		//file i ����
		for (int k = 0; k < 60; k++) {
			MyGraph::setDay(4);
			MyGraph::setTime(k);
			//cout << "Day: " << 0 << "Time: " << k << endl;
			result = myGraph.Mode2(-5, 12, checker);
			stringstream buffer;
			buffer << k;
			for (map<string, pair<int, int>>::iterator iter = result.begin(); iter != result.end(); iter++) {
				//cout << iter->first << endl;	//���������� �̸�
				//cout << "���������� ž�� ���� �ο�: " << iter->second.first << "  ���������� �׿� �ο�: " << iter->second.second << endl;
				buffer << "," << iter->second.second;
				sumOfRemain += iter->second.second;
			}
			buffer << ",\n";
			string ss = buffer.str();
			savingFile << ss;
		}
		savingFile.close();
		
		
		savingFile.open("Sat.csv");
		savingFile << "TIME\\Elv,elv1,elv2,elv3,elv4,elv5,elv6,elv7,elv8,elv9,elv10,\n";
		//file i ����
		for (int k = 0; k < 60; k++) {
			MyGraph::setDay(5);
			MyGraph::setTime(k);
			//cout << "Day: " << 0 << "Time: " << k << endl;
			result = myGraph.Mode2(-5, 12, checker);
			stringstream buffer;
			buffer << k;
			for (map<string, pair<int, int>>::iterator iter = result.begin(); iter != result.end(); iter++) {
				//cout << iter->first << endl;	//���������� �̸�
				//cout << "���������� ž�� ���� �ο�: " << iter->second.first << "  ���������� �׿� �ο�: " << iter->second.second << endl;
				buffer << "," << iter->second.second;
				sumOfRemain += iter->second.second;
			}
			buffer << ",\n";
			string ss = buffer.str();
			savingFile << ss;
		}
		savingFile.close();

	cout << "Sum: " << sumOfRemain << endl;

	/*
	for (int i = 0; i < 6; i++) {
		for (int k = 0; k < 60; k++) {
			MyGraph::setDay(i);
			MyGraph::setTime(k);
			cout << "Day: " << i << "Time: " << k << endl;
			result = myGraph.Mode2(-5, 12, -1);

			for (map<string, pair<int, int>>::iterator iter = result.begin(); iter != result.end(); iter++) {
				cout << iter->first << endl;	//���������� �̸�
				cout << "���������� ž�� ���� �ο�: " << iter->second.first << "  ���������� �׿� �ο�: " << iter->second.second << endl;
				sumOfRemain += iter->second.second;
			}
		}
	}
	*/
	
	
	//myGraph.setNumOfElv();
	



	
}

