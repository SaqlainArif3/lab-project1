for (int i = 0; i < 1; i++) {  // Loop runs once for case 1
    if (student.age >= 18 && student.age <= 25) {
        cout << student.name << " is eligible for case " << i + 1 << " (Age eligibility)." << endl;
    } else {
        cout << student.name << " is not eligible for case " << i + 1 << " (Age eligibility)." << endl;
    }
}
