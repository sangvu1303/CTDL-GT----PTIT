#include <iostream>
#include<iomanip>
#include <stdio.h>
#include <string>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;

queue<string> s;

class ThiSinh{
	private:
		string hoVaTenDem;
		string ten;
		float diemToan;
		float diemLy;
		float diemHoa;
	public:
		void Nhap(){
			cout<<"Nhap ho va ten dem: " << endl;
			cin.ignore();  
			fflush(stdin);
			getline(cin, hoVaTenDem);
			cout<<"Nhap ten: "<<endl;
			fflush(stdin);
			cin >> ten;
			cout<<"Nhap diem Toan: "<<endl;
			cin>>diemToan;
			cout<<"Nhap diem Ly: "<<endl;
			cin>>diemLy;
			cout<<"Nhap diem Hoa: "<<endl;
			cin>>diemHoa;
		} // Input

		void Xuat(){
			cout<<hoVaTenDem<<"\t";
			cout<<ten<<"\t";
			cout<<diemToan<<"\t";
			cout<<diemLy<<"\t";
			cout<<diemHoa<<"\t";
			cout<<(diemToan * 3 + diemLy * 2 + diemHoa)/6<<endl;
		} // Output
		
		float DiemTrungBinh(){
			return (diemToan * 3 + diemLy * 2 + diemHoa)/6;
		} // Sort
		
		bool DiemLiet(){
			if(diemToan < 1 || diemLy < 1|| diemHoa < 1){
				return true;
			}
			return false;
		} // Diem liet

		string removeDupWord() { 
			string word = ""; 
			for (auto x : hoVaTenDem) { 
				if (x == ' ') { 
					cout << word << endl;
					return "";
				} else { 
					word = word + x;
				} 
			}  
			return word;
		}

		void ghiB( fstream &ifsb ){
			ifsb.write( reinterpret_cast<const char*>(this),sizeof(ThiSinh));
		}
}; // Class Thi sinh


void XoaPhanTu(ThiSinh a[], int &n, int pos){
	for(int i = pos; i < n; i++){
		a[i] = a[i+1];
	}
	n--;
} // Delete


void Xoa(ThiSinh a[], int &n){
	for(int i = 0; i < n;){
		if(a[i].DiemTrungBinh() < 5 || a[i].DiemLiet() == true){
			XoaPhanTu(a, n, i);
		}
		else{
			i++;
		}
	}
} //Xoa diem tb thap hon 5 hoac co diem liet

int main(){
	//Cau 1
	int n;
	cout<<"Nhap so thi sinh (khong qua 100): "<<endl;
	cin>>n;

	ThiSinh danhsach[10000];
	for(int i = 0; i < n; i++){
		cout<<"Nhap thong tin thi sinh thu "<<i + 1<<endl;
		danhsach[i].Nhap();
	}
	//Cau 2
	cout<<"Ket qua: \n";
	cout<<"\n------------------------------------------------------------------------\n";
	cout<<"Danh sach thi sinh sau khi nhap la:" << endl;
	cout <<"     Ho dem     Ten   Toan   Ly    Hoa    Diem trung binh" << endl;
	for(int i = 0; i < n; i++){
		danhsach[i].Xuat();
	}
	//Cau 3
	fstream ifsb( "BD.DAT", ios::out );
	cout<<"\n------------------------------------------------------------------------\n";
	cout<<"Danh sach thi sinh co diem trung binh nho hon 5 hoac co diem liet."<<endl;
	cout <<"     Ho dem     Ten   Toan   Ly    Hoa    Diem trung binh" << endl;
	for(int i = 0; i < n; i++){
		if(danhsach[i].DiemTrungBinh() < 5 || danhsach[i].DiemLiet() == true){
			danhsach[i].Xuat();
			danhsach[i].ghiB(ifsb);
		}
	}
	ifsb.close();

	//Cau 4
	Xoa(danhsach, n);
	
	ThiSinh temp;
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(danhsach[i].DiemTrungBinh() < danhsach[j].DiemTrungBinh()){
				temp = danhsach[i];
				danhsach[i] = danhsach[j];
				danhsach[j] = temp;
			}
		}
	}
	cout<<"\n------------------------------------------------------------------------\n";
	cout<<"Danh sach thi sinh co diem trung binh cao hon 5 va giam dan."<<endl;
	cout <<"     Ho dem     Ten   Toan   Ly    Hoa    Diem trung binh" << endl;
	for(int i = 0; i < n; i++){
		danhsach[i].Xuat();
	}

	// Cau 5
	cout<<"\n------------------------------------------------------------------------\n";
	int count = 1;
	for(int i = 0; i < n; i++){
		s.push(danhsach[i].removeDupWord());
	}
	for(int i=0; i<s.size(); i++) {
		string s1 = s.front(); s.pop();
		string s2 = s.front(); s.pop();
		if(s1.compare(s2) == 0) {
			count = count;
		}
		else {
			count += 1;
		}
		if(s.size() == 1) {
			count += 1;
		}
	}
	cout << "So ho trong danh sach la: " << count << endl;
	return 0;
}
