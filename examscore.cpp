for (int i = 2; i < 3; i++) {  // Loop runs once for case 3
    if (student.entranceExamScore >= 50) {
        cout << student.name << " is eligible for case " << i + 1 << " (Entrance exam score eligibility)." << endl;
    } else {
        cout << student.name << " is not eligible for case " << i + 1 << " (Entrance exam score eligibility)." << endl;
    }
}
