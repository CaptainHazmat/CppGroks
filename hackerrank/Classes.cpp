#include <iostream>
#include <sstream>
using namespace std;

class Student {
    int m_age, m_standard;
    string m_fname, m_lname;
public:
    int get_age() { return m_age; }
    void set_age(int age) {
        m_age = age;
    }
    string get_first_name() { return m_fname; }
    void set_first_name(string fname) {
        m_fname = fname;
    }
    int get_standard() { return m_standard; }
    void set_standard(int standard) {
        m_standard = standard;
    }
    string get_last_name() { return m_lname; }
    void set_last_name(string lname) {
        m_lname = lname;
    }
    string to_string() {
        stringstream ss;
        ss << m_age << "," << m_fname << "," << m_lname << "," << m_standard;
        return ss.str();
    }

};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}
