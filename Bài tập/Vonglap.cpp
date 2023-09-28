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
	cout << "Ket qua BMI cua ban " << nguoi.ho_ten << " " << bmi << endl;

}
void dong ? _thoi_gian(ConNguoi nguoi, int nam_troi_qua)
{
	for (int i = 0; i< nam_troi_qua ;i=i+1 )
	{
	nguoi.can_nang = nguoi.can_nang + 2;
}
	chi_so_BMI
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