#include <iostream>

using namespace std;

struct ConNguoi
{
	string ho_ten;
	int tuoi;
	float chieu_cao;
	float can_nang;

};

void chi_so_BMI(ConNguoi nguoi)
{
	float bmi = nguoi.can_nang / (nguoi.chieu_cao * nguoi.chieu_cao);
	string ket_qua;
	if (bmi < 18.5)
	{
		ket_qua = "gay";

	}
	else if (bmi > 25)
	{
		ket_qua = "map";

	}
	else
	{
		ket_qua = "chuan";
	}
	cout << "Ket qua BMI cua ban " << nguoi.ho_ten << " la " << ket_qua << endl;

}

int main()
{
	ConNguoi nguoi;
	nguoi.ho_ten = "Nhat Nguyen";
	nguoi.tuoi = 18;
	nguoi.chieu_cao = 1.6;
	nguoi.can_nang = 50;
	chi_so_BMI(nguoi);

	system("pause");
	return 0;

}