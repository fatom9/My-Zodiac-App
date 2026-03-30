#include <iostream>
#include <string>

using namespace std;

// --- إعدادات الألوان (تنسيق فاطمة الخاص) ---
#define RESET   "\033[0m"
#define PINK    "\033[1;35m" 
#define L_PINK  "\033[1;95m" 
#define WHITE   "\033[1;37m"
#define BOLD    "\033[1m"

// دالة تحديد البرج والصفات (بواسطة فاطمة)
void getZodiacInfo(int day, int month) {
  
        sign = "Taurus (الثور)";
        traits = "صبورة، مخلصة، وتحب الأشياء الجميلة.";
    } else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
       
        sign = "Virgo (العذراء)";
        traits = "دقيقة، منظمة، وتسعى دائماً للكمال.";
    } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        sign = "Libra (الميزان)";
        traits = "دبلوماسية، رقيقة، وتحب التوازن والجمال.";
    } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {sign = "Gemini (الجوزاء)";
        traits = "اجتماعية، فضولية، وسريعة التعلم.";
    } else if ((month == 6 && day >= 21)  (month == 7 && day <= 22)) {
        sign = "Cancer (السرطان)";
        traits = "عاطفية، حنونة، ووفية جداً لعائلتها.";
    } else if ((month == 7 && day >= 23)  (month == 8 && day <= 22)) {
        sign = "Leo (الأسد)";
        traits = "قوية، كريمة، وتحب لفت الأنظار بجمالها.";
    } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        sign = "Scorpio (العقرب)";
        traits = "شغوفة، غامضة، ولديها حدس قوي جداً.";
    } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        sign = "Sagittarius (القوس)";
        traits = "متفائلة، محبة للمغامرة، وروحها حرة.";
    } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
        sign = "Capricorn (الجدي)";
        traits = "طموحة، عملية، ومنظمة لأبعد الحدود.";
    } else {
        sign = "Unknown";
    }

if (sign != "Unknown") {
        cout << L_PINK << "🌙 برجكِ هو: " << WHITE << sign << endl;
        cout << PINK << "✨ صفاتكِ المميزة: " << WHITE << traits << endl;
        cout << L_PINK << "🔮 نصيحة لكِ: " << WHITE << "تألقي دائماً، فالعالم يحتاج لنوركِ!" << endl;
    } else {
        cout << PINK << "❌ التاريخ غير صحيح، يرجى التأكد من المدخلات." << endl;
    }
}   

int main() {
    int day, month;

    // واجهة المشروع (فاطمة عبد الصمد)
    cout << PINK << "========================================" << endl;
    cout << L_PINK << BOLD << "    🌸 Fatima's Zodiac Finder 🌸" << endl;
    cout << PINK << "========================================" << endl;

    cout << WHITE << "أهلاً بكِ في مشروعي الخاص! ✨" << endl;
    cout << "لطفاً، أدخلي يوم ميلادكِ (مثلاً 16): ";
    cin >> day;
    cout << "لطفاً، أدخلي شهر ميلادكِ (مثلاً 12): ";
    cin >> month;

    cout << PINK << "\n----------------------------------------" << endl;
    
    getZodiacInfo(day, month);

    cout << PINK << "----------------------------------------" << endl;
    cout << L_PINK << "Created with Love by: " << WHITE << "Fatima Abdulsamad" << RESET << endl;

    return 0;
}
