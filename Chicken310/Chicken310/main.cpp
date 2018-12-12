#include "Classroom.h"
#include "CNode.h"
#include "MyGraph.h"
#include "CSVRow.h"
#include<iostream>
#include<fstream>

using namespace std;



int main()
{
	//그래프 생성
	MyGraph myGraph;
	vector<string> path;


	//pair<잉여, 탑승>
	//잉여 = up or down 발생인원 - 엘레베이터 가용 인원
	map<string,pair<int, int>> result;
	
	//1층에서 7층을 가려고할 때 이용가능한 엘레베이터들의 대기시간
	//day = 2, time = 44
	
	//층 변환

	myGraph.setNumOfElv();

	int sumOfRemain = 0;
	double floors[18];
	for (int i = 0; i < 18; i++) {
		floors[i] = 0;
	}
	int checker = -1;	//1 상행, -1 하행
	int UpDown = 1;	    //0: 상행 1: 하행

	



		ofstream savingFile;
		savingFile.open("Mon.csv");
		savingFile << "TIME\\Elv,elv1,elv2,elv3,elv4,elv5,elv6,elv7,elv8,elv9,elv10,\n";
		//file i 요일
		for (int k = 0; k < 60; k++) {
			MyGraph::setDay(0);
			MyGraph::setTime(k);
			//cout << "Day: " << 0 << "Time: " << k << endl;
			result = myGraph.Mode2(-5, 12, checker);
			stringstream buffer; 
			buffer << k ;
			for (map<string, pair<int, int>>::iterator iter = result.begin(); iter != result.end(); iter++) {
				//cout << iter->first << endl;	//엘레베이터 이름
				//cout << "엘레베이터 탑승 가능 인원: " << iter->second.first << "  엘레베이터 잉여 인원: " << iter->second.second << endl;
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
		//file i 요일
		for (int k = 0; k < 60; k++) {
			MyGraph::setDay(1);
			MyGraph::setTime(k);
			//cout << "Day: " << 0 << "Time: " << k << endl;
			result = myGraph.Mode2(-5, 12, checker);
			stringstream buffer;
			buffer << k;
			for (map<string, pair<int, int>>::iterator iter = result.begin(); iter != result.end(); iter++) {
				//cout << iter->first << endl;	//엘레베이터 이름
				//cout << "엘레베이터 탑승 가능 인원: " << iter->second.first << "  엘레베이터 잉여 인원: " << iter->second.second << endl;
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
		//file i 요일
		for (int k = 0; k < 60; k++) {
			MyGraph::setDay(2);
			MyGraph::setTime(k);
			//cout << "Day: " << 0 << "Time: " << k << endl;
			result = myGraph.Mode2(-5, 12, checker);
			stringstream buffer;
			buffer << k;
			for (map<string, pair<int, int>>::iterator iter = result.begin(); iter != result.end(); iter++) {
				//cout << iter->first << endl;	//엘레베이터 이름
				//cout << "엘레베이터 탑승 가능 인원: " << iter->second.first << "  엘레베이터 잉여 인원: " << iter->second.second << endl;
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
		//file i 요일
		for (int k = 0; k < 60; k++) {
			MyGraph::setDay(3);
			MyGraph::setTime(k);
			//cout << "Day: " << 0 << "Time: " << k << endl;
			result = myGraph.Mode2(-5, 12, checker);
			stringstream buffer;
			buffer << k;
			for (map<string, pair<int, int>>::iterator iter = result.begin(); iter != result.end(); iter++) {
				//cout << iter->first << endl;	//엘레베이터 이름
				//cout << "엘레베이터 탑승 가능 인원: " << iter->second.first << "  엘레베이터 잉여 인원: " << iter->second.second << endl;
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
		//file i 요일
		for (int k = 0; k < 60; k++) {
			MyGraph::setDay(4);
			MyGraph::setTime(k);
			//cout << "Day: " << 0 << "Time: " << k << endl;
			result = myGraph.Mode2(-5, 12, checker);
			stringstream buffer;
			buffer << k;
			for (map<string, pair<int, int>>::iterator iter = result.begin(); iter != result.end(); iter++) {
				//cout << iter->first << endl;	//엘레베이터 이름
				//cout << "엘레베이터 탑승 가능 인원: " << iter->second.first << "  엘레베이터 잉여 인원: " << iter->second.second << endl;
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
		//file i 요일
		for (int k = 0; k < 60; k++) {
			MyGraph::setDay(5);
			MyGraph::setTime(k);
			//cout << "Day: " << 0 << "Time: " << k << endl;
			result = myGraph.Mode2(-5, 12, checker);
			stringstream buffer;
			buffer << k;
			for (map<string, pair<int, int>>::iterator iter = result.begin(); iter != result.end(); iter++) {
				//cout << iter->first << endl;	//엘레베이터 이름
				//cout << "엘레베이터 탑승 가능 인원: " << iter->second.first << "  엘레베이터 잉여 인원: " << iter->second.second << endl;
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
				cout << iter->first << endl;	//엘레베이터 이름
				cout << "엘레베이터 탑승 가능 인원: " << iter->second.first << "  엘레베이터 잉여 인원: " << iter->second.second << endl;
				sumOfRemain += iter->second.second;
			}
		}
	}
	*/
	
	
	//myGraph.setNumOfElv();
	



	
}

