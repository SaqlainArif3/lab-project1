for (int i = 1; i < 2; i++) {  // Loop runs once for case 2
    if (student.grade >= 60) {
        cout << student.name << " is eligible for case " << i + 1 << " (Grade eligibility)." << endl;
    } else {
        cout << student.name << " is not eligible for case " << i + 1 << " (Grade eligibility)." << endl;
    }
}
