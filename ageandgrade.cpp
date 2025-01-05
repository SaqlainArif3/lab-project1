for (int i = 3; i < 4; i++) {  // Loop runs once for case 4
    if (student.age >= 18 && student.age <= 25 && student.grade >= 60) {
        cout << student.name << " is eligible for case " << i + 1 << " (Age and grade eligibility)." << endl;
    } else {
        cout << student.name << " is not eligible for case " << i + 1 << " (Age and grade eligibility)." << endl;
    }
}
