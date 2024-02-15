#include<iostream>
using namespace std;
struct farm {
	int cow_id;
	double yield[7];
	double total_yield;
};

void t1(farm*& cow,int size, int &total) {
	cow = new farm[size];
	for (int i = 0; i < size; i++) {
		cout << "Enter a (3 digit) id of cow " << i + 1 << " : ";
		cin >> cow[i].cow_id;
		while (cow[i].cow_id < 100 || cow[i].cow_id>999) {
			cout << "Enter valid id(must be a 3 digit number): ";
			cin >> cow[i].cow_id;
		}
		cout << "Enter this week's yield of cow with id(" << cow[i].cow_id << ") in Litters! \n";
		cow[i].total_yield = 0;
		for (int j = 0; j < 7; j++) {
			cout << "Enter day(" << j+1 << "'s) total yield(MILK) of this cow: ";
			cin >> cow[i].yield[j];
			while (cow[i].yield[j] < 0) {
				cout << "Please enter valid yield(must be a positive number): ";
				cin >> cow[i].yield[j];
			}
			cow[i].total_yield+= cow[i].yield[j];
			//cout << endl;
		}
		total += cow[i].total_yield;
		cout << endl;
	}

}
void t2(farm* cow, int size, const int total) {
	cout << "-------------------------------------------------------------------\n";
	cout << "RECORDED YIELD FOR THIS WEEK:\n";
	for (int i = 0; i < size; i++) {
		cout << "| COW ID = " << cow[i].cow_id << "  :  Yield of this week = " << cow[i].total_yield << " litters |\n";
	}
	cout << "-------------------------------------------------------------------\n";
	cout << "TOTAL YIELD(CALCULATED) THIS WEEK: " << total <<" litters." << endl;
	cout << "Average YIELD(PER COW) THIS WEEK: " << total / size << " litters." << endl;
	cout << "-------------------------------------------------------------------\n";
}

void t3(farm* cow, int size, int& max) {
	max = cow[0].total_yield-1;
	int index=0;
	for (int i = 0; i < size; i++) {
		if (max < cow[i].total_yield) {
			max = cow[i].total_yield;
			index = i;
		}
	}
	cout << "\n-------------------------------------------------------------------\n";
	cout << "STATS(OVERALL):\n";
	cout << "Cow that produced highest milk= " << cow[index].cow_id<<" : YIELD= "<< cow[index].total_yield << " litters." << endl;
	cout << "-------------------------------------------------------------------\n";
	cout << "Cows that are producing low volume of milk: "; 
	for (int i = 0; i < size; i++) {
		if (cow[i].total_yield<12) {
			cout <<"Cow ID = "<< cow[i].cow_id << endl;
		}
	}
	cout << "-------------------------------------------------------------------\n";
}

int main() {
	cout << "\t  -----------------------------------\n";
	cout << "\t  ***WELCOME TO FARM'S DATA CENTER***\n";
	cout << "\t  -----------------------------------\n\n";
	cout << "Enter no. of cows in your farm (SIZE OF HERD): ";
	int size;
	cin >> size;
	while (size < 0) {
		cout << "Enter valid size(must be a positive number): ";
		cin >> size;
	}
	cout << endl;
	cout << "\t~~~LETS ENTER THE DATA OF "<<size<<" COWS~~~\n";
	farm* cow = new farm[size];
	int total = 0,max=0;
	//TASK#1
	t1(cow, size, total);
	cout << "* THANKS FOR PROVIDING DATA!\n";
	//TASK#2
	t2(cow, size, total);
	//TASK#3
	t3(cow, size, max);

	cout << "Thanks for using my software, HAPPY FARMING! "<<char(1)<<endl;




	return 0;
}