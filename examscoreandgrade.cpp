for (int i = 4; i < 5; i++) {  // Loop runs once for case 5
    if (student.entranceExamScore >= 50 && student.grade >= 60) {
        cout << student.name << " is eligible for case " << i + 1 << " (Entrance exam score and grade eligibility)." << endl;
    } else {
        cout << student.name << " is not eligible for case " << i + 1 << " (Entrance exam score and grade eligibility)." << endl;
    }
}
