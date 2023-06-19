#include <iostream>
#include <string>
using namespace std;

class Karyawan {
protected:
    float gaji;
public:
    string NIP;
    string Nama;
    string DeptName;

    void setGaji(float x) {
        gaji = x;
    }
};

class Manajer : public Karyawan {
private:
    float tunjangan;
    float bonus;
    float HitGaji() {
        return gaji + tunjangan + bonus;
    }
public:
    void displayResult() {
        cout << "========SLIP GAJI========" << endl;
        cout << "NIP\t\t\t: " << NIP << endl;
        cout << "Nama\t\t: " << Nama << endl;
        cout << "Departemen\t: " << DeptName << endl;
        cout << "Gaji anda\t: " << HitGaji() << endl;
    }

    void setTunjangan(float x) {
        tunjangan = x;
    }

    void setBonus(float x) {
        bonus = x;
    }
};

class Staf : public Karyawan {
private:
    float lembur;
    float HitGaji() {
        return gaji + lembur;
    }
public:
    void displayResult() {
        cout << "========SLIP GAJI========" << endl;
        cout << "NIP\t\t\t: " << NIP << endl;
        cout << "Nama\t\t: " << Nama << endl;
        cout << "Departemen\t: " << DeptName << endl;
        cout << "Gaji anda\t: " << HitGaji() << endl;
    }

    void setLembur(float x) {
        lembur = x;
    }
};

int main() {
    cout.precision(100);
    string pilihan;
    cout << "Pilihlah M=Manajer, S=Staf ? ";
    cin >> pilihan;

    switch (pilihan[0]) {
        case 'M': {
            Manajer manajer;
            string nip, nama, deptName;
            float gaji, tunjangan, bonus;

            cout << "Masukkan NIP\t\t\t: ";
            cin >> nip;
            manajer.NIP = nip;

            cout << "Masukkan Nama\t\t\t: ";
            cin >> nama;
            manajer.Nama = nama;

            cout << "Masukkan Nama Dept\t\t: ";
            cin >> deptName;
            manajer.DeptName = deptName;

            cout << "Masukkan Gaji Anda\t\t: ";
            cin >> gaji;
            manajer.setGaji(gaji);

            cout << "Masukkan Tunjangan Anda\t: ";
            cin >> tunjangan;
            manajer.setTunjangan(tunjangan);

            cout << "Masukkan Bonus Anda\t\t: ";
            cin >> bonus;
            manajer.setBonus(bonus);

            manajer.displayResult();
            break;
        }
        case 'm': {
            Manajer manajer;
            string nip, nama, deptName;
            float gaji, tunjangan, bonus;

            cout << "Masukkan NIP\t\t\t: ";
            cin >> nip;
            manajer.NIP = nip;

            cout << "Masukkan Nama\t\t\t: ";
            cin >> nama;
            manajer.Nama = nama;

            cout << "Masukkan Nama Dept\t\t: ";
            cin >> deptName;
            manajer.DeptName = deptName;

            cout << "Masukkan Gaji Anda\t\t: ";
            cin >> gaji;
            manajer.setGaji(gaji);

            cout << "Masukkan Tunjangan Anda\t: ";
            cin >> tunjangan;
            manajer.setTunjangan(tunjangan);

            cout << "Masukkan Bonus Anda\t\t: ";
            cin >> bonus;
            manajer.setBonus(bonus);

            manajer.displayResult();
            break;
        }
        case 'S': {
            Staf staf;
            string nip, nama, deptName;
            float gaji, lembur;

            cout << "Masukkan NIP\t\t\t: ";
            cin >> nip;
            staf.NIP = nip;

            cout << "Masukkan Nama\t\t\t: ";
            cin >> nama;
            staf.Nama = nama;

            cout << "Masukkan Nama Dept\t\t: ";
            cin >> deptName;
            staf.DeptName = deptName;

            cout << "Masukkan Gaji Anda\t\t: ";
            cin >> gaji;
            staf.setGaji(gaji);

            cout << "Masukkan Lembur Anda\t: ";
            cin >> lembur;
            staf.setLembur(lembur);

            staf.displayResult();
            break;
        }
        case 's': {
            Staf staf;
            string nip, nama, deptName;
            float gaji, lembur;

            cout << "Masukkan NIP\t\t\t: ";
            cin >> nip;
            staf.NIP = nip;

            cout << "Masukkan Nama\t\t\t: ";
            cin >> nama;
            staf.Nama = nama;

            cout << "Masukkan Nama Dept\t\t: ";
            cin >> deptName;
            staf.DeptName = deptName;

            cout << "Masukkan Gaji Anda\t\t: ";
            cin >> gaji;
            staf.setGaji(gaji);

            cout << "Masukkan Lembur Anda\t: ";
            cin >> lembur;
            staf.setLembur(lembur);

            staf.displayResult();
            break;
        }
        default:
            cout << "Pilihan tidak valid." << endl;
    }

    return 0;
}
