//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//    char name[100];
//    char class_num[100];
//    char major[100];
//
//    cout<<"이름 : ";
//    cin>>name;
//
//    cout<<"학번 : ";
//    cin>>class_num;
//
//    cout<<"전공 : ";
//    cin>>major;
//
//    cout<<major<<class_num<<name<<endl;
//}

//-----------------------------------------

//#include <iostream>
//using namespace std;
//
//int cal(unsigned int num1, unsigned int num2);
//
//int main(void)
//{
//    unsigned int num1 = 0;
//    unsigned int num2 = 0;
//
//
//    cout<<"Enter Two Numbers : ";
//    cin>>num1>>num2;
//
//
//    cout<<cal(num1, num2)<<endl;
//}
//
//int cal(unsigned int num1, unsigned int num2)
//{
//    return num1 + num2;
//}

//---------------------------------------------

//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//    int num1 = 0;
//    int num2 = 0;
//
//    cout<<"Enter Two Numbers : ";
//    cin>>num1>>num2;
//
//    cout<<num1<<" + "<<num2<<" : "<<num1+num2<<endl;
//    cout<<num1<<" - "<<num2<<" : "<<num1-num2<<endl;
//    cout<<num1<<" * "<<num2<<" : "<<num1*num2<<endl;
//    cout<<num1<<" / "<<num2<<" : "<<(float)num1/(float)num2<<endl;
//    cout<<num1<<" % "<<num2<<" : "<<num1%num2<<endl;
//
//}
//------------------------------------------

//#include <iostream>    // 입출력을 하기위한 헤더파일
//using namespace std;   // std 네임스페이스 사용
//
//void cal_1(int& n1);   // 제곱을 해주는 함수 선언
//void cal_2(int& n2);   // 세제곱을 해주는 함수 선언
//
//
//int main(void)
//{
//    int num = 0;       // 숫자를 입력받을 변수 선언
//
//    int num1 = 0;         // 입력받은 숫자를 저장할 첫번쨰 정수형 변수 선언
//    int num2 = 0;         // 입력받은 숫자를 저장할 두번째 정수형 변수 선언
//
//    cout<<"Number : ";
//    cin>>num;             // 숫자 입력 코드
//
//    num1 = num;
//    num2 = num;
//
//    cal_1(num1);          // 제곱해주는 함수 호출
//    cout<<"Number^2 : "<< num1 << endl;
//    cal_2(num2);          // 세제곱해주는 함수 호출
//    cout<<"Number^3 : "<< num2 << endl;
//
//
//}
//
//void cal_1(int& n1)        // 제곱을 해주는 함수 정의
//{
//    n1 = n1 * n1;
//}
//
//void cal_2(int& n2)        // 세제곱을 해주는 함수 정의
//{
//    n2 = n2 * n2 * n2;
//}

//--------------------------------------------

//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//    int num1 = 0;
//    int num2 = 0;
//
//    cout << "Enter Two Number : ";
//    cin >> num1 >> num2;
//
//    if (num1 > num2)
//    {
//        cout << num1 << " > " << num2 << endl;
//    }
//    else if (num1 < num2)
//    {
//        cout << num1 << " < " << num2 << endl;
//    }
//    else if (num2 == num1)
//    {
//        cout << num1 << " = " << num2 << endl;
//    }
//}

//----------------------------------------------

//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//    int num = 0;
//    int count = 0;
//
//    cout << "Enter any Number : ";
//    cin >> num;
//
//
//    for (int i = 1; i <= 20; i++)
//    {
//        cout<<i<<"\t";
//        count += 1;
//        if(count % num == 0)
//        {
//            cout << endl;
//        }
//    }
//    cout << endl;
//}
//----------------------------------------------

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int cal_1(int n);
//
//int main(void)
//{
//    double num = 0;
//    cout << "Enter any Number : ";
//    cin >> num;
//
//    cout << cal_1(num)<<endl;
//}
//
//int cal_1(int n)
//{
//    if(n <= 0)
//    {
//        return 0;
//    }
//    else
//    {
//        int result = n * pow(2,n);
//        return result + cal_1(n-1);
//    }
//}
//----------------------------------------------

//#include <iostream>
//using namespace std;
//
//char board[] {'x','0','0','0','0','0','0','0','0','\0'};
//
//void Make_Board();
//
//
//int main(void)
//{
//    char c[50];
////    char board[] {'x','0','0','0','0','0','0','0','0','\0'};
//
//    Make_Board();
//    while(c[0] != 'q')
//    {
//        cout << "Enter Move Command(a : Left, d : Right, w : Up, s : Down, q : Finish) : ";
//        cin >> c;
//
//        if(c[0] == 'a')
//        {
//            int n = 0;
//
//            for (int i = 1; board[i-1] != '\0'; i++)
//            {
//                if ( board[i-1] == 'x')
//                {
//                    n = i-1;
//                }
//            }
//            if (n == 0 || n == 3 || n == 6)
//            {
//                Make_Board();
//                continue;
//            }
//            else
//            {
//                board[n] = '0';
//                n -= 1;
//                board[n] = 'x';
//
//                Make_Board();
//            }
//        }
//        else if(c[0] == 'd')
//        {
//            int n = 0;
//
//            for (int i = 1; board[i-1] != '\0'; i++)
//            {
//                if ( board[i-1] == 'x')
//                {
//                    n = i-1;
//                }
//            }
//            if (n == 2 || n == 5 || n == 8)
//            {
//                Make_Board();
//                continue;
//            }
//            else
//            {
//                board[n] = '0';
//                n += 1;
//                board[n] = 'x';
//
//                Make_Board();
//            }
//        }
//        else if(c[0] == 's')
//        {
//            int n = 0;
//
//            for (int i = 1; board[i-1] != '\0'; i++)
//            {
//                if ( board[i-1] == 'x')
//                {
//                    n = i-1;
//                }
//            }
//            if (n == 6 || n == 7 || n == 8)
//            {
//                Make_Board();
//                continue;
//            }
//            else
//            {
//                board[n] = '0';
//                n += 3;
//                board[n] = 'x';
//
//                Make_Board();
//            }
//        }
//        else if(c[0] == 'w')
//        {
//            int n = 0;
//
//            for (int i = 1; board[i-1] != '\0'; i++)
//            {
//                if ( board[i-1] == 'x')
//                {
//                    n = i-1;
//                }
//            }
//            if (n == 0 || n == 1 || n == 2)
//            {
//                Make_Board();
//                continue;
//            }
//            else
//            {
//                board[n] = '0';
//                n -= 3;
//                board[n] = 'x';
//
//                Make_Board();
//            }
//        }
//    }
//}
//
//void Make_Board()
//{
//    for (int i = 1; board[i-1] != '\0'; i++)
//    {
//        cout << board[i-1] << "\t";
//        if (i % 3 == 0)
//        {
//            cout << endl;
//        }
//    }
//}
//----------------------------------------------
//
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main(void)
//{
//
//    ifstream in("Assignment.txt");
//    if(!in)
//    {
//        cout << "Unable to open 'Assignment.txt' " << endl;
//        exit(0);
//    }
//
//
//    ofstream out("Assignment.txt");
//    if(!out)
//    {
//        cout << "Unable to open 'Assignment.txt' " << endl;
//        exit(0);
//    }
//
//    out << "apple";
//    cout << "Good!" << endl;
//    out.close();
//    in.close();
//}
//-----------------------------------------
//#include <iostream>
//#include <fstream>      // 파일 입출력을 위해 헤더파일 선언
//using namespace std;
//
//int main(void)
//{
//    int arr[101];     // 파일에서 읽어온 정보를 저장하기 위해 int형 배열 선언
//
//    int temp = 0;
//
//    ifstream in("Assignment.txt");     //  "Assignment.txt" 파일 읽어온다.
//
//
//    if (!in)       // 제대로 읽어오지 못한다면
//    {
//        cout << "Unable to open " << "Assignment.txt" << endl;    // 에러 메세지 출력
//        exit(0);
//    }
//
//    for (int i = 0; i < 20; i++)      // 파일 속 숫자들의 개수가 20개 이므로 20번 반복
//    {
//        in >> arr[i];     // in 함수는 파일 속 정보를 띄어쓰기 단위로 읽을 수 있어 읽은 후 배열에 저장
//    }
//
//    cout << "Input array : ";
//    for (int i = 0; i < 20; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << endl;

//
//    for (int j = 0; j < 19; j++)     // 버블 정렬를 사용하여 정렬
//    {
//        for (int k = 0; k < 19; k++)
//        {
//            if (arr[k] > arr[k + 1])   // 이전 숫자가 다음 숫자보다 더 클때 순서 변경
//            {
//                temp = arr[k + 1];
//                arr[k + 1] = arr[k];
//                arr[k] = temp;
//            }
//        }
//    }
//
//    cout << "Sorted array : ";
//
//    for (int i = 0; i < 20; i++)
//    {
//        cout << arr[i] << " ";      // 정렬된 배열 출력
//    }
//
//
//    cout << endl;
//
//    in.close();       // 파일 닫기
//
//    return 0;
//}
//----------------------------------
//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//    char arr1[101];      // 첫번째 char형 배열 선언
//    char arr2[101];      // 두번쨰 char형 배열 선언
//
//    int num1 = 0;
//    int num2 = 0;
//
//    char temp;
//
//    cout << "Array 1 : ";
//    cin >> arr1;
//    cout << "Array 2 : ";
//    cin >> arr2;
//
//    for (int i = 0; i < 10; i++)
//    {
//        if ((int)arr1[i] >= 65 && (int)arr1[i] <= 90)
//        {
//            num1 = ((int)arr1[i] - 64);
//        }
//        else
//        {
//            num1 = ((int)arr1[i] - 96);
//        }
//
//        if (arr2[i] >= 65 && arr2[i] <= 90)
//        {
//            num2 = ((int)arr2[i] - 64);
//        }
//        else
//        {
//            num2 = ((int)arr2[i] - 96);
//        }
//
//        if (num1 < num2)
//        {
//            temp = arr2[i];
//            arr2[i] = arr1[i];
//            arr1[i] = temp;
//        }
//    }
//    cout << "Exchanged Array 1 : " << arr1 << endl;
//    cout << "Exchanged Array 2 : " << arr2 << endl;
//
//    cout << endl;
//}
//------------------------------------
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int len(char* c);
//int main(void)
//{
//    char arr[100];
//    char arr_second[100][20] = { '\0' ,};
//    string arr_store[20][100];
//    int k = 0;
//    int l = 0;
//    int count = 0;
//    int cnt = 0;
//
//    ifstream in("Assignment2.txt");
//
//    if (!in)
//    {
//        cout << "Unable to open " << "Assignment2.txt" << endl;
//        exit(0);
//    }
//
//    while(!in.eof())
//    {
//        in.getline(arr, 100);
//    }
//
//    for (int i = 0; i < 100; i++)
//    {
//        if (arr[i] == 32)
//        {
//            for(int j = 0; j < count; j++)
//            {
//                arr_second[l][j] = arr[j+k];
//            }
//            count = 0;
//            k = i+1;
//            l += 1;
//        }
//        else
//        {
//            count += 1;
//        }
//    }
//
//    for (int i = 0; i < l; i++)
//    {
//        int j = 0;
//        cnt = len(arr_second[l]);
//        if (arr_store[cnt][j] != "\0")
//        {
//            j += 1;
//        }
//    }
//    in.close();
//
//    return 0;
//}
//
//int len(char* c)
//{
//    int i = 0;
//    for (i = 0;; i++)
//    {
//        if (c[i] == '\0')
//        {
//            break;
//        }
//    }
//    return i;
//}
//------------------------------------
//#include <iostream>
//using namespace std;
//
//char board[] {'H','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','\0'};
//
//void Make_Board();
//
//
//int main(void)
//{
//    char c[50];
//    int count = 0;
//    int b1 = 0;
//    int b2 = 0;
//    int b3 = 0;
//    int b4 = 0;
//    int b5 = 0;
//
//    Make_Board();
//    while(c[0] != 'q')
//    {
//        count += 1;
//        cout << "Enter Move Command(a : Left, d : Right, w : Up, s : Down, q : Finish) : ";
//        cin >> c;
//
//        if(c[0] == 'a')
//        {
//            int n = 0;
//            for (int i = 1; board[i-1] != '\0'; i++)
//            {
//                if ( board[i-1] == 'H')
//                {
//                    n = i-1;
//                }
//            }
//
//            if (n == 0 || n == 5 || n == 10 || n == 15 || n == 20)
//            {
//                Make_Board();
//                continue;
//            }
//            else
//            {
//                b5 = b4;
//                b4 = b3;
//                b3 = b2;
//                b2 = b1;
//                b1 = n;
//
//                board[b5] = '0';
//                board[b4] = 'x';
//                board[b3] = 'x';
//                board[b2] = 'x';
//                board[b1] = 'x';
//                n -= 1;
//                board[n] = 'H';
//
//                Make_Board();
//            }
//        }
//        else if(c[0] == 'd')
//        {
//            int n = 0;
//
//            for (int i = 1; board[i-1] != '\0'; i++)
//            {
//                if ( board[i-1] == 'H')
//                {
//                    n = i-1;
//                }
//            }
//
//            if (n == 4 || n == 9 || n == 14 || n == 19 || n == 24)
//            {
//                Make_Board();
//                continue;
//            }
//            else
//            {
//                b5 = b4;
//                b4 = b3;
//                b3 = b2;
//                b2 = b1;
//                b1 = n;
//
//                board[b5] = '0';
//                board[b4] = 'x';
//                board[b3] = 'x';
//                board[b2] = 'x';
//                board[b1] = 'x';
//                n += 1;
//                board[n] = 'H';
//
//                Make_Board();
//            }
//        }
//        else if(c[0] == 's')
//        {
//            int n = 0;
//
//            for (int i = 1; board[i-1] != '\0'; i++)
//            {
//                if ( board[i-1] == 'H')
//                {
//                    n = i-1;
//                }
//            }
//
//            if (n == 20 || n == 21 || n == 22 || n == 23 || n == 24)
//            {
//                Make_Board();
//                continue;
//            }
//            else
//            {
//                b5 = b4;
//                b4 = b3;
//                b3 = b2;
//                b2 = b1;
//                b1 = n;
//
//                board[b5] = '0';
//                board[b4] = 'x';
//                board[b3] = 'x';
//                board[b2] = 'x';
//                board[b1] = 'x';
//                n += 5;
//                board[n] = 'H';
//
//                Make_Board();
//            }
//        }
//        else if(c[0] == 'w')
//        {
//            int n = 0;
//
//            for (int i = 1; board[i-1] != '\0'; i++)
//            {
//                if ( board[i-1] == 'H')
//                {
//                    n = i-1;
//                }
//            }
//
//
//            if (n == 0 || n == 1 || n == 2 || n == 3 || n == 4)
//            {
//                Make_Board();
//                continue;
//            }
//            else
//            {
//                b5 = b4;
//                b4 = b3;
//                b3 = b2;
//                b2 = b1;
//                b1 = n;
//
//                board[b5] = '0';
//                board[b4] = 'x';
//                board[b3] = 'x';
//                board[b2] = 'x';
//                board[b1] = 'x';
//                n -= 5;
//                board[n] = 'H';
//
//                Make_Board();
//            }
//        }
//    }
//}
//
//void Make_Board()
//{
//    for (int i = 1; board[i-1] != '\0'; i++)
//    {
//        cout << board[i-1] ;
//        if (i % 5 == 0)
//        {
//            cout << endl;
//        }
//    }
//}
//-------------------------------------------------
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//int main(void)
//{
//    int* ptr = new int[10];
//    int max = 0;
//    int min = 9;
//    int* max_ptr = new int;
//    int* min_ptr = new int;
//
//    srand(time(NULL));
//
//    for (int i = 0; i < 10; i++)
//    {
//        *(ptr + i) = (rand() % 10);
//        if (max <= *(ptr + i))
//        {
//            max = *(ptr + i);
//            max_ptr = (ptr + i);
//        }
//
//        if (min >= *(ptr + i))
//        {
//            min = *(ptr + i);
//            min_ptr = (ptr + i);
//        }
//    }
//
//    for (int i = 0; i < 10; i++)
//    {
//        cout << "Address : " << &ptr[i] << endl;
//        cout << "value : " << ptr[i] << endl;
//    }
//    cout << "Max Data is " << *(max_ptr) << "(" << max_ptr << ")" << endl;
//    cout << "Min Data is " << *(min_ptr) << "(" << min_ptr << ")" << endl;
//
//    delete[] ptr;
//}
//-------------------------------------------------
//#include <iostream>
//using namespace std;
//
//int len(char* c);
//
//int main(void)
//{
//    char* c1 = new char[100];
//    char* c2 = new char[100];
//
//    cout << "String 1 : ";
//    cin.getline(c1,100);
//
//    cout << "String 2 : ";
//    cin.getline(c2,100);
//
//    char* c3 = new char[len(c1) + len(c2) + 1];
//
//    cout << len(c1) << " " << len(c2) << endl;
//
//
//    for (int i = 0; i < len(c1); i++)
//    {
//        *(c3 + i) = *(c1 + i);
//    }
//
//    for (int i = 0; i < len(c2); i++)
//    {
//        *(c3 + i + len(c1)) = *(c2 + i);
//    }
//    *(c3 + len(c1) + len(c2) + 1) = '\0';
//
//    cout << c3 << endl;
//
//}
//
//int len(char* c)
//{ㅊ
//    int i = 0;
//    for (i = 0;; i++)
//    {
//        if (c[i] == '\0')
//        {
//            break;
//        }
//    }
//    return i;
//}
////--------------------------------
// 4주차 1번
//
//#include <iostream>
//#include <cstdlib>      // rand 함수를 사용하기 위한 헤더파일 선언
//using namespace std;
//
//int main(void)
//{
//
//    int* ptr = new int[10];    // 무작위 자연수를 저장하기 위해 정수형 포인터 동적할당
//    int max = 0;               // 최댓값을 찾기 위한 변수 선언
//    int min = 9;               // 최솟값을 찾기 위한 변수 선언
//    int* max_p ;                // 최댓값의 주소를 저장하기 휘한 포인터 선언
//    int* min_p ;                // 최솟값의 주소를 저장하기 위한 포인터 선언
//
//    srand(time(NULL));         // 프로그램 실행마다다른 값이 나오도록 하는 함수
//
//    for (int i = 0; i < 10; i++)
//    {
//        *(ptr + i) = (rand() % 10);      // 포인터에 무작위 정수 저장
//        if (max <= *(ptr + i))           // 만약 max값보다 크거나 같다면
//        {
//            max = *(ptr + i);            // max에 포인터 값 저장
//            max_p = (ptr + i);           // 포인터 주소도 저장
//        }
//
//        if (min >= *(ptr + i))           // 만약 min값보다 작거나 같다면
//        {
//            min = *(ptr + i);            // min에 포인터 값 저장
//            min_p = (ptr + i);           // 포인터 주소도 저장
//        }
//    }
//
//    for (int i = 0; i < 10; i++)
//    {
//        cout << "Memory Address is " << &ptr[i] << endl;     // 주소 출력
//        cout << "value is " << ptr[i] << endl;               // 정수 값 출력
//    }
//    cout << "Max Data is " << *(max_p) << "(" << max_p << ")" << endl;        // max값과 그 값의 주소 출력
//    cout << "Min Data is " << *(min_p) << "(" << min_p << ")" << endl;        // min값과 그 값의 주소 출력
//
//    delete[] ptr;     //동적할당 한 포인터 삭제
//}
//-------------------------------------------

// //4주차 2번
//
//#include <iostream>
//using namespace std;
//
//int len(char* c);               // 문자열의 길이를 구해주는 함수 선언
//
//int main(void)
//{
//    char* c1 = new char[100];       // 첫번째 문자열을 저장시켜줄 포인터 동적할당
//    char* c2 = new char[100];       // 두번째 문자열을 저장시켜줄 포인터 동적할당
//
//    cout << "String 1 : ";
//    cin.getline(c1,100);
//
//    cout << "String 2 : ";
//    cin.getline(c2,100);
//
//    char* c3 = new char[len(c1) + len(c2) + 1];    // 문자열을 합쳐서 저장시켜줄 포인터 동적할당
//
//    for (int i = 0; i < len(c1); i++)              // 첫번째 문자열의 길이만큼 반복
//    {
//        *(c3 + i) = *(c1 + i);                     // 세번째 문자열에 첫번쨰 문자열 값 대입
//    }
//
//    for (int i = 0; i < len(c2); i++)              // 두번째 문자열의 길이만큼 반복
//    {
//        *(c3 + i + len(c1)) = *(c2 + i);           // 첫번째 문자열을 저장하고 그 다음위치부터 두번쨰 문자열 값 대입
//    }
//    *(c3 + len(c1) + len(c2) + 1) = '\0';          // 제일 마지막에 '\0'값 대입
//
//    cout << c3 << endl;
//
//    delete[] c1;
//    delete[] c2;
//    delete[] c3;
//}
//
//int len(char* c)             // 문자열의 길이를 구해주는 함수 정의
//{
//    int i = 0;
//    for (i = 0;; i++)        // 무한 반복
//    {
//        if (c[i] == NULL)       // 만약 NULL값을 만난다면
//        {
//            break;           // 반복문 탈출
//        }
//    }
//    return i;                 // i값 반환 (길이)
//}
//
//------------------------------------------------
// 4주차 3번
//
//#include <iostream>
//#include <cstdlib>       // rand 함수를 사용하기 위한 헤더파일 선언
//
//using namespace std;
//
//void print_arr(int** arr, int r, int c);       // matrix를 출력해주는 함수 선언
//
//int main(void)
//{
//    int** matrix1;       // matrix1 을 저장할 포인터
//    int** matrix2;       // matrix2 를 저장할 포인터
//
//    int** matrix_r;      // 행렬의 곱을 해서 matrix_r 을 저장할 포인터
//    int r1 = 0;          // matrix1의 행
//    int c1 = 0;          // matrix1의 열
//
//    int r2 = 0;          // matrix2의 행
//    int c2 = 0;          // matrix2의 열
//
//    srand(time(NULL));            // 프로그램 실행마다 다른 값이 나오도록 하는 함수
//
//    cout << "Matrix 1 : " ;
//    cin >> r1 >> c1;              // matrix1의 행과 열 입력
//
//    cout << "Matrix 2 : " ;
//    cin >> r2 >> c2;              // matrix2의 행과 열 입력
//
//    matrix1 = new int*[r1 + 1];    // matrix1의 행을 동적할당
//
//    matrix2 = new int*[r2 + 1];    // matrix2의 행을 동적할당
//
//    for (int i = 0; i < r1; i++)
//    {
//        matrix1[i] = new int[c1 + 1];   // matrix1의 열을 동적할당
//    }
//
//    for (int i = 0; i < r2; i++)
//    {
//        matrix2[i] = new int[c2 + 1];   // matrix2의 열을 동적할당
//    }
//
//    for (int i = 0; i < r1; i++)
//    {
//        for (int j = 0; j < c1; j++)
//        {
//            matrix1[i][j] = (rand() % 11);    // matrix1에 무작위 자연수 저장
//        }
//    }
//
//    for (int i = 0; i < r2; i++)
//    {
//        for (int j = 0; j < c2; j++)
//        {
//            matrix2[i][j] = (rand() % 11);    // matrix2에 무작위 자연수 저장
//        }
//    }
//    cout << endl;
//
//    cout << "A Matrix : " << endl;
//
//    print_arr(matrix1, r1, c1);      // matrix를 출력해주는 함수 호출
//
//    cout << "B Matrix : " << endl;
//
//    print_arr(matrix2, r2, c2);
//
//    if(c1 == r2)              // Matrix Multiplication을 하기위해 matrix1의 열과 matrix2의 행 비교
//    {
//        matrix_r = new int*[r1 + 1];    // matrix_r의 행 동적할당
//
//        for (int i = 0; i < r1; i++)
//        {
//            matrix_r[i] = new int[c2 + 1];    // matrix_r의 열 동적할당
//        }
//
//        for (int i = 0 ; i < r1; i++)
//        {
//            for (int j = 0 ; j < c2; j++)
//            {
//                for (int k = 0; k < c1; k++)
//                {
//                    matrix_r[i][j] += matrix1[i][k] * matrix2[k][j];   // 행렬의 곱 연산
//                }
//            }
//        }
//        cout << "A * B Result : " << endl;
//        print_arr(matrix_r, r1, c2);
//
//    }
//    else
//    {
//        cout << "Can't Operate Matrix Multiplication(" << r2 << "!=" << c1 << ")" << endl;   // 만약 행렬의 곱을 못한다면 불가능 메시지 출력
//    }
//
//
//    for (int i = 0; i < r1; i++)   // matrix1 메모리 해제
//    {
//        delete[] matrix1[i];
//    }
//
//    delete[] matrix1;
//
//    for (int i = 0; i < r2; i++)  // matrix2 메모리 해제
//    {
//        delete[] matrix2[i];
//    }
//
//    delete[] matrix2;
//}
//
//void print_arr(int** arr, int r, int c)    // matrix를 출력해주는 함수 정의
//{
//    for (int i = 0; i < r; i++)
//    {
//        for (int j = 0; j < c; j++)
//        {
//            cout << arr[i][j] << "\t";
//        }
//        cout << endl;
//    }
//    cout << endl;
//}
//------------------------------------------------
// 4주차 4번
//
//#include <iostream>
//#include <cstdlib>             // rand 함수 사용하기 위한 해더파일 선언
//
//using namespace std;
//
//int main(void)
//{
//    int** matrix;              // matrix 저장하기 위한 다중포인터
//    int temp = 0;              // 정렬을 위한 변수 선언
//    int* temp_p;               // 정렬을 위한 포인터
//
//    matrix = new int*[10];     // matrix의 행 동적할당
//
//
//    for (int i = 0; i < 10; i++)
//    {
//        matrix[i] = new int[11];     // matrix의 열 동적할당
//    }
//
//    srand(time(NULL));               // 프로그램 실행마다 다른 값이 나오도록 하는 함수
//
//    for (int i = 0; i < 10; i++)
//    {
//        for (int j = 0; j < 10; j++)
//        {
//            matrix[i][j] = (rand() % 101);      // matrix에 무작위 정수 저장
//        }
//    }
//
//    cout << "Original Matrix" << endl;
//
//    for (int i = 0; i < 10; i++)
//    {
//        for (int j = 0; j < 10; j++)
//        {
//            cout << matrix[i][j] << "\t";         // matrix 출력
//        }
//        cout << endl;
//        matrix[i][10] = 0;                        // 각 행의 sum을 저장할 위치를 초기화
//    }
//
//    cout << endl;
//
//    cout << "Sort by row" << endl;
//
//    for (int i = 0; i < 10; i++)
//    {
//        for (int j = 0; j < 10; j++)
//        {
//            matrix[i][10] += matrix[i][j];      // 각 행의 sum을 구해 반복
//
//            for (int k = 0; k < 9; k++)
//            {
//                if (matrix[j][k] > matrix[j][k+1])    // 오름차순으로 각 행의 값들을 정렬
//                {
//                    temp = matrix[j][k+1];
//                    matrix[j][k+1] = matrix[j][k];
//                    matrix[j][k] = temp;
//                }
//            }
//        }
//    }
//
//    for (int i = 0; i < 10; i++)                 // 정렬 후 matrix 다시 출력
//    {
//        for (int j = 0; j < 10; j++)
//        {
//            cout << matrix[i][j] << "\t";
//        }
//        cout << "Sum is " << matrix[i][10] << "(" << matrix[i] << ")" << endl;
//    }
//
//    for (int j = 0; j <10 ; j++)
//    {
//        for (int i = 0; i < 9; i++)
//        {
//            if(matrix[i][10] > matrix[i+1][10])     // 각 행들의 sum값들을 주소값을 받아 오름차순으로 정렬
//            {
//                temp_p = matrix[i+1];
//                matrix[i+1] = matrix[i];
//                matrix[i] = temp_p;
//            }
//        }
//    }
//
//    cout << endl;
//
//    cout << "Sort by sum" << endl;
//
//    for (int i = 0; i < 10; i++)      // sum값을 기준으로 정렬한 matrix 다시 출력
//    {
//        for (int j = 0; j < 10; j++)
//        {
//            cout << matrix[i][j] << "\t";
//        }
//        cout << "Sum is " << matrix[i][10] << "(" << matrix[i] << ")" << endl;
//    }
//
//    for (int i = 0; i < 10; i++)   // matrix 메모리 해제
//    {
//        delete[] matrix[i];
//    }
//
//    delete[] matrix;
//
//}

//--------------------------------------------
// 5주차 과제 1
//
//#include <iostream>
//using namespace std;
//
//int len(char* c);
//
//int main(void)
//{
//    char** a = new char*[100];
//
//    char* com = new char;  // command 저장해줄 포인터
//
//    char* num = new char;  // 숫자 저장해줄 포인터
//
//    int num_len = 0;;
//
//    int top = 0;
//
//
//    while(true)
//    {
//        for (int j = 0; j < num_len; j++)
//        {
//            num[j] = NULL;
//        }
//
//        cout << "Please Enter Command(push, pop) : ";
//        cin.getline(com,100);
//
//        if (com[0] == 'p' && com[1] == 'u' && com[2] == 's' && com[3] == 'h' && com[4] == ' ')
//        {
//
//            for (int j = 5; j < len(com); j++)
//            {
//                num[j-5] = com[j];
//            }
//
//            num_len = len(num);
//
//            a[top] = new char[len(num) + 1];
//
//            for (int i = 0; i < len(num); i++)
//            {
//                a[top][i] = num[i];
//            }
//
//            top += 1;
//
//            a[top-1][len(num)] = '\0';
//
//            for (int i = 0; i < top; i++)
//            {
//                cout << a[i] << endl;
//            }
//
//        }
//
//        else if (com[0] == 'p' && com[1] == 'o' && com[2] == 'p')
//        {
//            if (top > 0)
//            {
//                top -= 1;
//
//                delete[] a[top];
//            }
//
//            for(int i = 0; i < top; i++)
//            {
//                cout << a[i] << endl;
//            }
//        }
//
//        else
//        {
//            cout << "error" << endl;
//        }
//    }
//
//    for (int i = 0; i < top; i++)
//    {
//        delete[] a[i];
//    }
//
//    delete[] a;
//    delete num;
//    delete com;
//}
//
//
//
//int len(char* c)             // 문자열의 길이를 구해주는 함수 정의
//{
//    int i = 0;
//
//    for (i = 0;; i++)        // 무한 반복
//    {
//        if (c[i] == NULL)       // 만약 NULL값을 만난다면
//        {
//            break;           // 반복문 탈출
//        }
//    }
//    return i;                 // i값 반환 (길이)
//}
//-------------------------------------------------------

//#include <iostream>
//using namespace std;
//
//char* my_strtok(char* string);
//int len(char* c);
//char* arr = new char[100];
//
//int main(void)
//{
//   char** string = new char* [10];
////   char* arr = new char[100];
//
//   int idx = 0;
//
//   cout << "Please Enter Any String : ";
//   cin.getline(arr,100);
//
//   string[idx] = my_strtok(arr);
//
//   cout << string[0] << endl;
//
//   while(string[idx] != NULL)
//   {
//      string[++idx] = my_strtok(NULL);
//   }
//   for (int i = 0; i < idx; i++)
//   {
//      cout << string[i] << endl;
//   }
//
//}
//
//char* my_strtok(char* string)
//{
//   static int id = 0;
//   int idx = 0;
//
//   char* str = new char[10]{NULL};
//
//   if (string != NULL)
//   {
//
//      while (string[idx] != '/')
//      {
//         idx += 1;
//      }
//
//      string[idx] = '\0';
//
//      id = idx+1;
//
//      for (int i = 0; i < idx; i++)
//      {
//         str[i] = string[i];
//      }
//   }
//   else if(string == NULL)
//   {
//      string = &arr[id+1];
//
//      if (id == 0)
//      {
//         str = NULL;
//      }
//      else
//      {
//         idx = id+1;
//
//         while (string[idx] != '/' || string[idx] != NULL)
//         {
//            idx += 1;
//            if (string[idx] == '\0')
//            {
//               break;
//            }
//         }
//         string[idx] = '\0';
//
//         id = idx+1;
//
//         int j = 0;
//         for (int i = idx; i < id; i++)
//         {
//            str[j] = string[i];
//         }
//      }
//   }
//
//   return str;
//   delete[] str;
//}
//
//int len(char* c)             // 문자열의 길이를 구해주는 함수 정의
//{
//    int i = 0;
//
//    for (i = 0;; i++)        // 무한 반복
//    {
//        if (c[i] == NULL)       // 만약 NULL값을 만난다면
//        {
//            break;           // 반복문 탈출
//        }
//    }
//    return i;                 // i값 반환 (길이)
//}

//-------------------------------------------------
// 5주차 과제 3번
//
//
//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//    int num = 0;
//
//    cout << "Please enter the length of matrix : " ;
//    cin >> num;
//
//    int** arr = new int*[num + 1];        // matrix 행 동적할당
//
//    for (int i = 0; i < num; i++)
//    {
//        arr[i] = new int[num];            // matrix 열 동적할당
//    }
//
//    int node = -1;
//
//    for(int i = 0; i < (num/2) +1 ; i++)
//    {
//        for(int j = i; j < num - i; j++)       // 오른쪽으로 이동
//        {
//            node += 1;
//            arr[i][j] = node;
//        }
//
//        for(int j = i + 1; j < num - i; j++)   // 아래로 이동
//        {
//            node += 1;
//            arr[j][num - 1 - i] = node;
//        }
//
//        for(int j = num - 2 - i; j >= i; j--)  // 왼쪽으로 이동
//        {
//            node += 1;
//            arr[num - i - 1][j] = node;
//        }
//
//        for(int j = num - 2 - i; j >= i + 1; j--)   // 위로 이동
//        {
//            node += 1;
//            arr[j][i] = node;
//        }
//    }
//
//
//    for(int i = 0; i < num; i++)
//    {
//        for(int j = 0; j < num; j++)
//        {
//            cout << arr[i][j] << "\t";
//        }
//        cout << endl;
//    }
//
//   for (int i = 0; i < num; i++)
//   {
//      delete[] arr[i];           // matrix 열 동적할당 메모리 해제
//   }
//
//   delete[] arr;                 // matrix 행 동적할당 메모리 해제
//}
//
//
//------------------------------------------------
// 5주차 4번
//
//#include <iostream>
//using namespace std;
//
//int len(char* c);
//
//int main(void)
//{
//    char** voca = new char*[100]{NULL};
//
//    int top = -1;
//    int word_len = 0;
//
//    while(true)
//    {
//        char* command = new char[100]{NULL};
//        char* word = new char[100]{NULL};
//        char* temp_p;
//        cin.getline(command,100);
//
//        if (command[0] == 'I' && command[1] == 'N' && command[2] == 'S' && command[3] == 'E' && command[4] == 'R' && command[5] == 'T' && command[6] == ' ')
//        {
//            top += 1;
//
//            for (int j = 7; j < len(command); j++)
//            {
//                word[j-7] = command[j];
//            }
//
//            word_len = len(word);
//
//            voca[top] = new char[len(word) + 1]{NULL};
//
//            for (int i = 0; i < len(word); i++)
//            {
//                voca[top][i] = word[i];
//            }
//
//            if (top > 0)
//            {
//                for (int i = top; i >= 0; i--)
//                {
//                    if (len(voca[i]) >= len(voca[i+1]))
//                    {
//                        for (int j = 0; j < len(voca[i+1]); j++)
//                        {
//
//                        }
//                    }
//                }
//            }
//
//            voca[top][len(word)] = '\0';
//
//            for (int i = 0; i <= top; i++)
//            {
//                cout << i << ". " <<voca[i] << endl;
////                cout << "len " << i << ": " << len(voca[i]) << endl;
//            }
//            delete[] word;
//            delete[] command;
//        }
//        else if(command[0] == 'E' && command[1] == 'N' && command[2] == 'D')
//        {
//            break;
//        }
//
//    }
//
//}
//
//int len(char* c)             // 문자열의 길이를 구해주는 함수 정의
//{
//    int i = 0;
//
//    for (i = 0;; i++)        // 무한 반복
//    {
//        if (c[i] == NULL)       // 만약 NULL값을 만난다면
//        {
//            break;           // 반복문 탈출
//        }
//    }
//    return i;                 // i값 반환 (길이)
//}

//------------------------------------------------------
//
//#include <iostream>
//
//using namespace std;
//void ascending(char**& arr1, int top);
//int len(char* word);
//int main()
//{
//   char* pointer = NULL;
//
//   char* word = new char[50]{ NULL };
//
//   char** Voca = new char* [100]{ NULL };
//   for (int i = 0; i < 100; i++)
//   {
//      Voca[i] = new char[50]{ NULL };
//   }
//   int top = -1;
//   while (true)
//   {
//      cin.getline(word, 100);
//
//      word[len(word) + 1] = NULL;
//      if (word[0] == 'I' && word[1] == 'N' && word[2] == 'S' && word[3] == 'E' && word[4] == 'R' && word[5] == 'T')
//      {
//         pointer = &word[7];
//
//         int check = 0;
//
//         top += 1;
//         if(top == -1)
//         {
//            for (int i = 0; i < len(word) - 7; i++)
//            {
//               Voca[top][i] = pointer[i];
//            }
//         }
//         else
//         {
//            for (int i = 0; i < top + 1; i++)
//            {
//               int count = 0;
//               if (len(pointer) == len(Voca[i]))
//               {
//                  for (int j = 0; j < len(pointer); j++)
//                  {
//                     if (pointer[j] == Voca[i][j])
//                     {
//                        count += 1;
//                     }
//                  }
//               }
//               if (count == len(pointer))
//               {
//                  check = 1;
//                  break;
//               }
//            }
//            if (check == 0)
//            {
//               for (int i = 0; i < len(word) - 7; i++)
//               {
//                  Voca[top][i] = pointer[i];
//               }
//            }
//            else
//            {
//               top -= 1;
//            }
//         }
//
//         if (top >= 1)
//         {
//
//            ascending(Voca, top);
//         }
//
//
//         for (int i = 0; i < top + 1; i++)
//         {
//            cout << i << "." << Voca[i] << endl;
//         }
//
//      }
//      else if (word[0] == 'F' && word[1] == 'I' && word[2] == 'N' && word[3] == 'D')
//      {
//         int a = 0;
//
//         pointer = &word[5];
//
//         for (int i = 0; i < top + 1; i++)
//         {
//            int count = 0;
//            if (len(pointer) == len(Voca[i]))
//            {
//               for (int j = 0; j < len(pointer); j++)
//               {
//                  if (pointer[j] == Voca[i][j])
//                  {
//                     count += 1;
//                  }
//               }
//            }
//            if (count == len(pointer))
//            {
//               a = 1;
//               cout << i << "." << Voca[i] << endl;
//               break;
//            }
//
//         }
//         if (a!=1)
//         {
//            cout << "Not Found" << endl;
//         }
//      }
//      else if (word[0] == 'E' && word[1] == 'N' && word[2] == 'D')
//      {
//         break;
//      }
//   }
//   return 0;
//}
//int len(char* word)
//{
//   int count = 0;
//   while (*word)
//   {
//      count += 1;
//      word++;
//   }
//   return count;
//}
//
//void ascending(char**& arr1, int top)
//
//{//x가 insert 받은 단어 // y가 기존 단어
//
//   for (int j = top; j > 0; j--)
//   {
//
//
//      for (int i = 0; ; i++)
//      {
//         char x = arr1[j][i];
//         char y = arr1[j - 1][i];
//         if (x > 'Z' && y > 'Z')
//         {
//            if (x < y)
//            {
//               char* temp = arr1[j];
//               arr1[j] = arr1[j - 1];
//               arr1[j - 1] = temp;
//
//            }
//            else if (x == y) {
//               continue;
//            }
//            else if (x > y)
//            {
//               return ;
//            }
//
//
//         }
//         else if (x > 'Z' && y <= 'Z')
//         {
//            char a = y + 32;
//            if (x < a)
//            {
//               char* temp = arr1[j];
//               arr1[j] = arr1[j - 1];
//               arr1[j - 1] = temp;
//
//            }
//            else if (x == a) {
//               continue;
//            }
//            else if (x > a)
//            {
//               return;
//            }
//
//
//         }
//         else if (x <= 'Z' && y > 'Z')
//         {
//            char b = x + 32;
//            if (b < y)
//            {
//               char* temp = arr1[j];
//               arr1[j] = arr1[j - 1];
//               arr1[j - 1] = temp;
//
//            }
//            else if (b == y) {
//               continue;
//            }
//            else if (b > y)
//            {
//               return;
//            }
//
//         }
//         else if (x <= 'Z' && y <= 'Z')
//         {
//            if (x < y)
//            {
//               char* temp = arr1[j];
//               arr1[j] = arr1[j - 1];
//               arr1[j - 1] = temp;
//
//            }
//            else if (x == y) {
//               continue;
//            }
//            else if (x > y)
//            {
//               return;
//            }
//
//         }
//         break;
//      }
//   }
//
//}
//---------------------------------------------------
//6주차 1번
//
//#include <iostream>
//using namespace std;
//
//class A
//{
//private:
//   int num;
//public:
//
//   A(const int n)
//   {
//      num = n;
//      cout << "Class A is Created with " << num << endl;
//   }
//   ~A() { cout << "Class A is Destroyed with " << num << endl; }
//
//};
//
//int main(void)
//{
//   int number;
//
//   cout << "Enter Any Number : " ;
//   cin >> number;
//
//   class A* a1 = new class A(number);
//
//   delete a1;
//
//   return 0;
//
//}


//---------------------------------------------------
//6주차 2번

//#include <iostream>
//using namespace std;
//
//int len(char* c);
//
//class My_string
//{
//private:
//
//   char* str;  // 문자열 저장
//   int top = 0;  // 약간 비슷
//
//public:
//
//   int my_strlen();   // 저장된 문자열 길이 반환
//   void my_strcpy(char* string);   // 입력받은 문자열 처음위치부터 저장
//   void my_strcat(char* string);   // 입력받은 문자열 붙이기
//   void print();    // 저장된 문자열 출력
//
//   My_string(char* input)   // 생성자
//   {
//      str = input;
//   }
//};
//
//int My_string::my_strlen() // 문자열 길이 반환 함수 정의
//{
//   int i = 0;
//
//   for (i = 0;; i++)        // 무한 반복
//   {
//       if (str[i] == NULL)       // 만약 NULL값을 만난다면
//       {
//           break;           // 반복문 탈출
//       }
//   }
//   return i;
//}
//
//void My_string::my_strcpy(char* string) // 입력받은 문자열 저장
//{
//   int j = 0;
//
//   int lenlen = len(str);
//
//   for (int i = 0; i < lenlen; i++)
//   {
//      str[i] = '\0';
//   }
//
//   for (j = 7; j < len(string); j++)
//   {
//       str[j-7] = string[j];
//   }
//
//   top = j-7;
//}
//
//void My_string::my_strcat(char* string)  // 문자열 붙이는 함수 정의
//{
//   int j = 0;
//   for (j = 7; j < len(string); j++) // command 에 입력할때 한줄에 입력받으니까 7번째 위치부터 넣어준다
//   {
//       str[top + j - 7] = string[j];
//   }
//   top = top + j - 7;
//}
//
//void My_string::print()    // 저장된 문자열 출력
//{
//   cout << str << endl;
//}
//
//
//int main(void)
//{
//   char* word = new char[100];   // 처음 단어 입력받을 문자열
//   char* command = new char[100];    // 커맨드 문자열 저장
//   cout << "First string : ";
//   cin.getline(word, 100);
//   My_string s(word);
//
//   while(true)
//   {
//      cout << "Command : ";
//      cin.getline(command, 100);
//
//      if (command[0] == 's' && command[1] == 't' && command[2] == 'r' && command[3] == 'l' && command[4] == 'e' && command[5] == 'n')
//      {
//         cout << "String Length : " << s.my_strlen() << endl;
//      }
//      else if (command[0] == 'p' && command[1] == 'r' && command[2] == 'i' && command[3] == 'n' && command[4] == 't')
//      {
//         s.print();
//      }
//      else if (command[0] == 's' && command[1] == 't' && command[2] == 'r' && command[3] == 'c' && command[4] == 'p' && command[5] == 'y' && command[6] == ' ')
//      {
//         s.my_strcpy(command);
//      }
//      else if (command[0] == 's' && command[1] == 't' && command[2] == 'r' && command[3] == 'c' && command[4] == 'a' && command[5] == 't' && command[6] == ' ')
//      {
//         s.my_strcat(command);
//      }
//      else if (command[0] == 'q' && command[1] == 'u' && command[2] == 'i' && command[3] == 't')
//      {
//         break;
//      }
//   }
//
//   delete[] command;
//   delete[] word;
//}
//
//int len(char* c)             // 문자열의 길이를 구해주는 함수 정의
//{
//    int i = 0;
//
//    for (i = 0;; i++)        // 무한 반복
//    {
//        if (c[i] == NULL)       // 만약 NULL값을 만난다면
//        {
//            break;           // 반복문 탈출
//        }
//    }
//    return i;                 // i값 반환 (길이)
//}

//------------------------------------------------
// 6주차 3번
//
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//
//class Student_info
//{
//
//private:
//   char name[10];
//   int age = 0;
//   char university[100];
//   char major[100];
//
//public:
//   Student_info(char* name, int age, char* univ, char* major);
//
//   bool find(char* name);
//   void print();
//   void change(char* name, int age, char* univ, char* major);
//};
//
//Student_info::Student_info(char* name, int age, char* univ, char* major)
//{
//
//   strcpy(this->name, name);
//   this->age = age;
//   strcpy(this->university, univ);
//   strcpy(this->major, major);
//}
//
//void Student_info::print()
//{
//   cout << "Name : " << name << endl;
//   cout << "Age : " << age << endl;
//   cout << "University : " << university << endl;
//   cout << "Major : " << major << endl;
//   cout << "----------------------" << endl;
//}
//
//bool Student_info::find(char* name)
//{
//   if (strcmp(this->name, name) == 0)
//   {
//      return true;
//   }
//   else
//   {
//      return false;
//   }
//}
//
//
//int main(void)
//{
//
//   char com_name[10];
//   int com_age = 0;
//   char com_univ[100];
//   char com_major[100];
//
//   char change_name[10];
//
//   int top = 0;
//
//   string command;
//
//   Student_info* stu[10];
//
//
//   while(true)
//   {
//      cout << "Please Enter Command(insert, find, change, print, exit) : ";
//
//      cin >> command;
//
//      if (command == "exit")
//      {
//         break;
//      }
//      else if(command == "insert")
//      {
//         cin >> com_name >> com_age >> com_univ >> com_major;
//         stu[top] = new Student_info(com_name, com_age, com_univ, com_major);
//         top += 1;
//
//      }
//      else if (command == "find")
//      {
//         cin >> com_name;
//         for (int i = 0; i < top; i++)
//         {
//            if (stu[i]->find(com_name))
//            {
//               cout << "---------find--------" << endl;
//               stu[i]->print();
//            }
//         }
//
//      }
//      else if(command == "change")
//      {
//         cin >> com_name >> change_name >> com_age >> com_univ >> com_major;
//         for (int i = 0; i < top; i++)
//         {
//            if (stu[i]->find(com_name))
//            {
//               delete stu[i];
//               stu[i] = new Student_info(change_name, com_age, com_univ, com_major);
//               break;
//            }
//         }
//      }
//      else if(command == "print")
//      {
//         cout << "---------print--------" << endl;
//         for (int i = 0; i < top; i++)
//         {
//            stu[i]->print();
//         }
//      }
//   }
//   return 0;
//}

//------------------------------------------------
// 6주차 4번

//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class animal
//{
//private:
//   char name[10];
//   int year = 0;
//   char species[100];
//
//public:
//
//   friend class zoo;
//
//   animal(char* n, int y, char* s)
//   {
//      strcpy(name,n);
//      year = y;
//      strcpy(species,s);
//   }
//};
//
//class zoo
//{
//private:
//   class animal *animal_list[100] {NULL};
//   int size = 0;
//public:
//
//   void save(char* n, int y, char* s)
//   {
//      animal_list[size] = new animal(n,y,s);
//      size += 1;
//
//   }
//
//   void print_all()
//   {
//      for (int i = 0; i < size; i++)
//      {
//         cout << "----------" << i << "----------"<<endl;
//         cout << "Name : " << animal_list[i]->name << endl;
//         cout << "Year : " << animal_list[i]->year << endl;
//         cout << "Species : " << animal_list[i]->species << endl;
//         cout << "---------------------" << endl;
//      }
//   }
//
//   void print_species(char* s)
//   {
//      int cnt = 0;
//      for (int i = 0; i < size; i++)
//      {
//         if (!strcmp(animal_list[i]->species,s))
//         {
//            cnt += 1;
//            cout << "----------" << i << "----------"<<endl;
//            cout << "Name : " << animal_list[i]->name << endl;
//            cout << "Year : " << animal_list[i]->year << endl;
//            cout << "Species : " << animal_list[i]->species << endl;
//            cout << "---------------------" << endl;
//         }
//      }
//      cout << "Number of Species is " << cnt << endl;
//      cout << "---------------------" << endl;
//   }
//
//};
//
//int main(void)
//{
//
//   char com_name[10];
//   int com_year = 0;
//   char com_species[100];
//
//   zoo z;
//
//   string command;
//
//   while(true)
//   {
//
//      cout << "Please Enter Command(new_animal, print_all, print_species, exit) : ";
//
//      cin >> command;
//
//      if (command == "exit")
//      {
//         break;
//      }
//      else if (command == "new_animal")
//      {
//         cin >> com_name >> com_year >> com_species;
//         z.save(com_name, com_year, com_species);
//
//      }
//      else if (command == "print_all")
//      {
//         cout << "------print_all------" << endl;
//         z.print_all();
//         cout << "---------------------" << endl;
//      }
//      else if (command == "print_species")
//      {
//         cin >> com_species;
//         cout << "------print_species------" << endl;
//         z.print_species(com_species);
//         cout << "---------------------" << endl;
//      }
//
//   }
//
//   return 0;
//}

//---------------------------------------------------
// 7주차 문제 1번
//
//#include <iostream>
//using namespace std;
//
//class Overloading      // Overloading 클래스 생성
//{
//public:
//   void add(int a, int b)   // int형을 인자로 받는 함수 선언
//   {
//      int result = 0;
//      result = a + b;
//      cout << "int type add : " << result << endl;
//   }
//   void add(float a, float b)    // float형을 인자로 받는 함수 선언
//   {
//      float result = 0;
//      result = a + b;
//      cout << "float type add : " << result << endl;
//   }
//   void add(unsigned int a, unsigned int b)   // unsigned int형을 인자로 받는 함수 선언
//   {
//      unsigned int result = 0;
//      result = a + b;
//      cout << "unsingned int type add : " << result << endl;
//   }
//};
//
//
//int main(void)
//{
//   class Overloading A;     // 객체A 생성
//   int int_a = 5, int_b = -10;    // int형 변수 선언
//   float float_a = 5.1, float_b = 5.3;   // float형 변수 선언
//   unsigned int unsigned_int_a = 5, unsigned_int_b = 5;     // unsigned int형 변수 선언
//
//   A.add(int_a, int_b);   // 멤버 함수 호출
//   A.add(float_a, float_b);   // 멤버 함수 호출
//   A.add(unsigned_int_a,unsigned_int_b);   // 멤버 함수 호출
//   return 0;
//}


//---------------------------------------------------
// 7주차 문제 2번
//
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//class Student     // Student 클래스 생성
//{
//private:
//   char name[20];    // name 멤버 변수 선언
//   int score;        // score 멤버 변수 선언
//public:
//   Student(char* n, int s)     // 생성자 선언 및 정의
//   {
//      strcpy(name, n);     // name에 n 대입
//      score = s;           // score에 s 대입
//   }
//   char* r_name()          // name을 반환하는 멤버 함수
//   {
//      return name;
//   }
//
//   int r_score()          // score을 반환하는 멤버 함수
//   {
//      return score;
//   }
//
//   void print()         // name과 score을 출력하는 멤버 함수
//   {
//      cout << name<< " "<< score << endl;
//   }
//
//};
//
//int main(void)
//{
//   int command = 0;    // command 변수 선언
//
//   char c_name[20];   // name을 입력할 c_name 변수 선언
//   int c_score = 0;   // score을 입력할 c_score 변수 선언
//
//   int top = 0;
//
//   Student* stu[100];   // 학생 정보를 저장하는 클래스 배열 선언
//   Student* temp;       // 정렬을 위한 변수 선언
//
//   while(true)
//   {
//      cout << "Please Enter Command(1: insert, 2:sort by name, 3:sort by score, 4.quit) : " ;
//      cin >> command;
//
//      if(command == 1)   // 1을 입력 받았을 때
//      {
//         cout << "insert" << endl;
//
//         cout << "Name : ";
//         cin >> c_name;
//
//         cout << "Score : ";
//         cin >> c_score;
//
//         stu[top] = new Student(c_name, c_score);    // 생성자를 이용해 학생 정보 입력
//
//         top += 1;
//
//      }
//      else if(command == 2)   // 2를 입력 받았을 때
//      {
//         for (int i = 0; i < top; i++)
//         {
//            for (int j = 0; j < top - 1; j++)
//            {
//               if ((strcmp(stu[j]->r_name(), stu[j + 1]->r_name()) > 0))  // strcmp로 이름의 순서 비교 후 정렬
//               {
//                  temp = stu[j];
//                  stu[j] = stu[j + 1];
//                  stu[j + 1] = temp;
//               }
//            }
//         }
//
//         for (int i = 0; i < top; i++)
//         {
//            stu[i]->print();
//         }
//      }
//
//      else if(command == 3)    // 3을 받았을 때
//      {
//         for (int i = 0; i < top; i++)
//         {
//            for (int j = 0; j < top - 1; j++)
//            {
//               if (stu[j]->r_score() > stu[j + 1]->r_score())    // 점수 비교 후 정렬
//               {
//                  temp = stu[j];
//                  stu[j] = stu[j + 1];
//                  stu[j + 1] = temp;
//               }
//            }
//         }
//
//         for (int i = 0; i < top; i++)
//         {
//            stu[i]->print();
//         }
//      }
//
//      else if(command == 4)   // 4를 입력 받았을 때
//      {
//         break;
//      }
//   }
//   return 0;
//}
//

//---------------------------------------------------
// 7주차 문제 3번

//#include <iostream>
//using namespace std;
//
//class Node
//{
//public:
//    double data;
//    Node* next;
//};
//
//class List
//{
//private:
//    Node* head;
//public:
//    List(void)
//    {
//        head = NULL;
//    }
//    ~List(void);
//
//    bool IsEmpty()
//    {
//        return head == NULL;
//    }
//
//    Node* InsertNode(int index, double x);
//
//    void FindNode(double x);
//
//    int DeleteNode(double x);
//
//    void DisplayList(void);
//
//};
//
//List::~List(void)
//{
//    Node* currNode = head, * nextNode = NULL;
//    while (currNode != NULL)
//    {
//        nextNode = currNode->next; // destroy the current node
//        delete currNode;
//        currNode = nextNode;
//    }
//}
//
//Node* List::InsertNode(int index, double x)
//{
//    if (index < 0)
//    {
//        return NULL;
//    }
//
//    int currIndex = 1;
//
//    Node* currNode = head;
//
//    while (currNode && index > currIndex)
//    {
//        currNode = currNode->next;
//        currIndex++;
//    }
//
//    if (index > 0 && currNode == NULL)
//    {
//        return NULL;
//    }
//
//    Node* newNode = new Node;
//
//    newNode->data = x;
//
//    if (index == 0)
//    {
//        newNode->next = head;
//        head = newNode;
//    }
//
//    else
//    {
//        newNode->next = currNode->next;
//        currNode->next = newNode;
//    }
//
//    return newNode;
//
//}
//
//void List::FindNode(double x)
//{
//    Node* currNode = head;
//    int currIndex = 0;
//    while (currNode)
//    {
//        currIndex++;
//        while (currNode && currNode->data != x)
//        {
//            currNode = currNode->next;
//            currIndex++;
//        }
//        if (currNode)
//        {
//           cout << "Found Index : ";
//           cout << currIndex << endl;
//           currNode = currNode->next;
//        }
//    }
//}
//
//int List::DeleteNode(double x)
//{
//    Node* prevNode = NULL;
//    Node* currNode = head;
//    int currIndex = 1;
//    while (currNode && currNode->data != x)
//    {
//        prevNode = currNode;
//        currNode = currNode->next;
//        currIndex++;
//    }
//    if (currNode)
//    {
//        if (prevNode)
//        {
//            prevNode->next = currNode->next;
//            delete currNode;
//        }
//        else
//        {
//            head = currNode->next;
//            delete currNode;
//        }
//        return currIndex;
//    }
//    return 0;
//
//}
//
//void List::DisplayList()
//{
//    int num = 0;
//    Node* currNode = head;
//    while (currNode != NULL)
//    {
//        cout << currNode->data << endl;
//        currNode = currNode->next;
//        num++;
//    }
//    cout << "Number of nodes in the list: " << num << endl;
//}
//
//
//int main(void)
//{
//    List a;
//
//    string command;
//    double num = 0;
//    int idx = 0;
//
//    while (true)
//    {
//        cout << "Please Enter Command(1 : insert, 2 : find, 3 : delete, 4 : print, 5 : quit) : ";
//        cin >> command;
//
//        if (command == "insert")
//        {
//            cin >> num;
//            a.InsertNode(idx, num);
//            idx++;
//
//        }
//        else if (command == "find")
//        {
//            cin >> num;
//            a.FindNode(num);
//
//        }
//        else if (command == "delete")
//        {
//            cin >> num;
//            while (a.DeleteNode(num))
//            {
//                idx--;
//            }
//
//        }
//        else if (command == "print")
//        {
//            a.DisplayList();
//
//        }
//        else if (command == "quit")
//        {
//
//            break;
//        }
//    }
//
//    return 0;
//}
//

//#include <iostream>
//using namespace std;
//
//class Node
//{
//public:
//   double data;
//   Node* next;
//};
//
//class List
//{
//private:
//   Node* head;
//   Node* tail;
//public:
//   List(void)
//   {
//      head = NULL;
//   }
//
//   ~List(void);
//
//   bool IsEmpty()
//   {
//      return head == NULL;
//   }
//
//   Node* InsertNode(int index, double x);
//
//   int FindNode(double x);
//
//   int DeleteNode(double x);
//
//   void DisplayList(void);
//
//};
//
//List::~List(void)
//{
//   Node* currNode = head, *nextNode = NULL;
//   while (currNode != NULL)
//   {
//      nextNode = currNode->next; // destroy the current node
//      delete currNode;
//      currNode = nextNode;
//   }
//}
//
//Node* List::InsertNode(int index, double x)
//{
//   if (index < 0)
//   {
//      return NULL;
//   }
//
//   int currIndex = 1;
//
//   Node* currNode = head;
//
//   while(currNode && index > currIndex)
//   {
//      currNode = currNode->next;
//      currIndex++;
//   }
//
//   if(index > 0 && currNode == NULL)
//   {
//      return NULL;
//   }
//
//   Node* newNode = new Node;
//
//   newNode -> data = x;
//
//   if (index == 0)
//   {
//      newNode->next = head;
//      head = newNode;
//   }
//
//   else
//   {
//      newNode->next = currNode->next;
//      currNode->next = newNode;
//   }
//
//   return newNode;
//
//}
//
//int List::FindNode(double x)
//{
//   Node* currNode = head;
//   int currIndex= 1;
//   while (currNode && currNode->data != x)
//   {
//      currNode = currNode->next;
//      currIndex++;
//   }
//   if (currNode)
//   {
//      return currIndex;
//   }
//
//   return 0;
//}
//
//int List::DeleteNode(double x)
//{
//   Node* prevNode = NULL;
//   Node* currNode = head;
//   int currIndex = 1;
//   while (currNode && currNode->data != x)
//   {
//      prevNode = currNode;
//      currNode = currNode->next;
//      currIndex++;
//   }
//   if (currNode)
//   {
//      if (prevNode)
//      {
//         prevNode->next =currNode ->next;
//         delete currNode;
//      }
//      else
//      {
//         head = currNode->next;
//         delete currNode;
//      }
//   return currIndex;
//   }
//   return 0;
//
//}
//
//void List::DisplayList()
//{
//   int num = 0;
//   Node* currNode = head;
//   while (currNode != NULL)
//   {
//      cout << currNode->data << endl;
//      currNode = currNode->next;
//      num++;
//   }
//   cout << "Number of nodes in the list: " << num << endl;
//}
//
//
//int main(void)
//{
//   List a;
//
//   string command;
//   double num = 0;
//   int idx = 0;
//
//   while(true)
//   {
//      cout << "Please Enter Command(1 : insert, 2 : find, 3 : delete, 4 : print, 5 : quit) : ";
//      cin >> command;
//
//      if (command == "insert")
//      {
//         cin >> num;
//         a.InsertNode(idx, num);
//         idx += 1;
//
//      }
//      else if (command == "find")
//      {
//         cin >> num;
//         cout << a.FindNode(num) << endl;
//
//      }
//      else if (command == "delete")
//      {
//         cin >> num;
//         while(a.DeleteNode(num) == 0)
//         {
//            idx -= 1;
//         }
////         a.DeleteNode(num);
////         idx -= 1;
//
//      }
//      else if (command == "print")
//      {
//         a.DisplayList();
//
//      }
//      else if (command == "quit")
//      {
//
//         break;
//      }
//   }
//
//   return 0;
//}
//

//---------------------------------------------------

//7주치 4번
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Node
//{
//public:
//   char arr[100] = {0, };
//   Node* Next;
//};
//
//class List
//{
//private:
//   Node* head;
//   Node* tail;
//public:
//   List()
//   {
//      head = NULL;
//      tail = NULL;
//   }
//   void Add(char* str)
//   {
//      if (head != NULL)
//      {
//         tail->Next = new Node;
//         tail = tail->Next;
//      }
//      else
//      {
//         head = new Node;
//         tail = head;
//      }
//      strcpy(tail->arr,str);
//      tail->Next = NULL;
//   }
//
//   void DisplayList()
//   {
//      Node* currNode = head;
//      while (currNode != NULL)
//      {
//         cout << currNode->arr << "->";
//         currNode = currNode->Next;
//      }
//      cout << endl;
//   }
//   int SearchList(char* str)
//   {
//      Node* currNode = head;
//      while(currNode != NULL)
//      {
//         if(strcmp(currNode->arr, str) != 0)
//         {
//            currNode = currNode->Next;
//         }
//         else
//         {
//            cout << "Already Exists" << endl;
//            while(currNode != NULL)
//            {
//               currNode = currNode->Next;
//            }
//            return 1;
//         }
//      }
//      return 0;
//   }
//
//   void CheckList(char* arr)
//   {
//      if (strcmp(arr, "exit") == 0)
//      {
//         DeleteAllObject();
//         exit(0);
//      }
//   }
//   void DeleteAllObject()
//   {
//      if (head != NULL)
//      {
//         Node* currNode = head;
//         Node* p_save_next;
//
//         while (currNode != NULL)
//         {
//            p_save_next = currNode->Next;
//            delete currNode;
//            currNode = p_save_next;
//         }
//         head = NULL;
//         tail = NULL;
//      }
//   }
//};
//
//int main(void)
//{
//   List l;
//   char arr[100];
//   char pre_arr[100] = { 0, };
//   int result=0;
//   for (int count = 0; ; count++)
//   {
//      cout << "CMD(Word/exit)>> ";
//      cin >> arr;
//      l.CheckList(arr);
//      result = l.SearchList(arr);
//      if (arr[0] == pre_arr[strlen(pre_arr) - 1] || arr[0] == pre_arr[strlen(pre_arr) - 1] - 32 || arr[0] == pre_arr[strlen(pre_arr) - 1] + 32 || count == 0)
//      {
//         if (result != 1)
//         {
//            l.Add(arr);
//            l.DisplayList();
//            strcpy(pre_arr, arr);
//         }
//         else if(result == 1)
//         {
//            l.DisplayList();
//         }
//      }
//
//      else {
//         cout << "Not Chained" << endl;
//         l.DisplayList();
//      }
//   }
//   return 0;
//}

//--------------------------------------------------
//
//#include<iostream>
//
//using namespace std;
//
//struct Node
//{
//   char arr[100] = { 0, };
//   Node* p_next;
//};
//
//class NumList
//{
//private:
//   Node* mp_head, * mp_tail;
//
//public:
//   NumList()
//   {
//      mp_head = mp_tail = NULL;
//   }
//
//   ~NumList()
//   {
//      DeleteAllObject();
//   }
//
//   void Addstr(char* a_arr)
//   {
//      if (NULL != mp_head)
//      {
//         mp_tail->p_next = new Node;
//         mp_tail = mp_tail->p_next;
//      }
//      else
//      {
//         mp_head = new Node;
//         mp_tail = mp_head;
//      }
//      strcpy(mp_tail->arr, a_arr);
//      mp_tail->p_next = NULL;
//   }
//
//
//   void DisplaystrList()
//   {
//      Node* p = mp_head;
//
//      while (NULL != p)
//      {
//         cout << p->arr << "-> ";
//         p = p->p_next;
//      }
//      cout << endl;
//   }
//
//   void DeleteAllObject()
//   {
//      if (mp_head != NULL)
//      {
//         Node* p = mp_head, * p_save_next;
//
//         while (NULL != p)
//         {
//            p_save_next = p->p_next;
//            delete p;
//            p = p_save_next;
//         }
//         mp_head = mp_tail = NULL;
//      }
//   }
//
//   int SearchList(char* search)
//   {
//      Node* p = mp_head;
//
//      while (NULL != p)
//      {
//
//         if (_stricmp(p->arr, search) != 0)
//         {
//            p = p->p_next;
//
//         }
//         else
//         {
//            cout << "Already Exists" << endl;
//            while (NULL != p)
//            {
//               p = p->p_next;
//            }
//            return 1;
//         }
//      }
//      return 0;
//   }
//
//   void CheckList(char* arr)
//   {
//      if (strcmp(arr, "exit") == 0) {
//         DeleteAllObject();
//         exit(0);
//      }
//   }
//};
//
//int main()
//{
//   NumList nums;
//   char arr[100];
//   char pre_arr[100] = { 0, };
//   int count = 0;
//   int result = 0;
//   for (int count = 0; ; count++)
//   {
//      cout << "CMD(Word/exit)>> ";
//      cin >> arr;
//      nums.CheckList(arr);
//      result = nums.SearchList(arr);
//      if (arr[0] == pre_arr[strlen(pre_arr) - 1] || arr[0] == pre_arr[strlen(pre_arr) - 1] - 32 || arr[0] == pre_arr[strlen(pre_arr) - 1] + 32 || count == 0)
//      {
//         if (result != 1)
//         {
//            nums.Addstr(arr);
//            nums.DisplaystrList();
//            strcpy(pre_arr, arr);
//         }
//         else if (result == 1)
//         {
//            nums.DisplaystrList();
//         }
//      }
//
//      else {
//         cout << "Not Chained" << endl;
//         nums.DisplaystrList();
//      }
//
//   }
//
//   return 0;
//}

//----------------------------------------------------
// 3-1 1번

//#include <iostream>
//using namespace std;
//
//class Person
//{
//   friend ostream& operator<<(ostream&, const Person&);
//   friend istream& operator>>(istream&, Person&);
//private:
//   char name[20];
//   int age;
//   char home[10];
//};
//
//ostream& operator<<(ostream& output, const Person& p)
//{
//   output << "이름 : " << p.name << endl;
//   output << "나이 : " << p.age << endl;
//   output << "거주지 : " << p.home << endl;
//   return output;
//}
//istream& operator>>(istream& input, Person& p)
//{
//   input >> p.name >> p.age >> p.home;
//   return input;
//}
//
//int main(void)
//{
//   Person P;
//   cin >> P;
//   cout << P;
//   return 0;
//}

//----------------------------------------------------
// 3-1 2번

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//class Polygon
//{
//private:
//   int Area;
//   int Perimeter;
//public:
//   void print_Area();
//   void print_Perimeter();
//
//   Polygon(int a, int b, int c)
//   {
//      int sum = a + b + c;
//      Perimeter = sum;
//      sum = sum / 2;
//      Area = sqrt(sum * (sum - a) * (sum - b) * (sum - c));
//   }
//
//   Polygon(int a, int b)
//   {
//      int sum = a + b;
//      Perimeter = sum * 2;
//      Area = a * b;
//   }
//   ~Polygon() {};
//};
//void Polygon:: print_Area()
//{
//   cout << "Area is " << this->Area << endl;
//}
//
//void Polygon:: print_Perimeter()
//{
//   cout << "Perimeter is " << this->Perimeter << endl;
//}
//
//class Triangle : public Polygon
//{
//private:
//   int A;
//   int B;
//   int C;
//public:
//   Triangle(int a, int b, int c) : Polygon(a, b, c)
//   {
//      this->A = a;
//      this->B = b;
//      this->C = c;
//   }
//   ~Triangle() {};
//};
//
//class Square : public Polygon
//{
//private:
//   int A;
//   int B;
//public:
//   Square(int a, int b) : Polygon(a, b)
//   {
//      this->A = a;
//      this->B = b;
//   }
//   ~Square() {};
//};
//
//int main(void)
//{
//   class Square A(5,4);
//   class Triangle B(13, 14, 15);
//
//   cout << "--------Square--------" << endl;
//   A.print_Area();
//   A.print_Perimeter();
//   cout << "----------------------" << endl;
//   cout << "-------Triangle-------" << endl;
//   B.print_Area();
//   B.print_Perimeter();
//   cout << "----------------------" << endl;
//
//   return 0;
//}


//----------------------------------------------------
// 3-1 3번

//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class my_string
//{
//private:
//   char* string = NULL;
//public:
//   void print()
//   {
//      cout << this->string << endl;
//   }
//
//   void operator+=(char* str)
//   {
//
//      if(this->string == NULL)
//      {
//         this->string = (char*)malloc(strlen(str));
//         strcpy(this->string, str);
//      }
//      else
//      {
//         this->string = (char*)realloc(this->string, strlen(str));
//         strcat(this->string, str);
//      }
//   }
//
//   void operator-=(char c)
//   {
//      char* str;
//      str = (char*)malloc(1);
//      int len = 0;
//      for (int i = 0; i < strlen(this->string); i++)
//      {
//         if(this->string[i] != c)
//         {
//            str[len] = this->string[i];
//            len++;
//            str = (char*)realloc(str, 1);
//         }
//      }
//      strcpy(this->string, str);
//
//   }
//
//   void operator--(int)
//   {
//      int l = strlen(this->string);
//      this->string[l-1] = NULL;
//   }
//
//   void operator&&(char c)
//   {
//      for (int i = 0; i < strlen(this->string); i++)
//      {
//         if (this->string[i] != c)
//         {
//            this->string[i] = '0';
//         }
//      }
//   }
//};
//
//int main(void)
//{
//   class my_string p;
//   int num = 0;
//   char com_c;
//   char com_s[100];
//   while(true)
//   {
//      cout << "Please Enter command(1 : add, 2 : delete_char, 3 : delete_lastchar, 4 : and_operator, 5 : print, 6 : exit) : " ;
//      cin >> num;
//      if(num == 1)
//      {
//         cin >> com_s;
//         p += com_s;
//      }
//      else if(num == 2)
//      {
//         cin >> com_c;
//         p -= com_c;
//      }
//      else if(num == 3)
//      {
//         p--;
//      }
//      else if(num == 4)
//      {
//         cin >> com_c;
//         p && com_c;
//      }
//      else if(num == 5)
//      {
//         p.print();
//      }
//      else if(num == 6)
//      {
//         break;
//      }
//   }
//}


//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class mystring {
//
//
//private:
//    char* string = NULL;
//
//public:
//    void print()
//    {
//        cout << this->string << endl;
//    }
//    mystring() {
//        this->string = new char{'\0'};
//    }
//    void operator +=(char* str) {
//        strcat(string, str);
//    }
//    void operator-=(char c)
//    {
//        char str[100] = {'\0'};
//        int len=0;
//
//        for (int i = 0; i < strlen(string); i++) {
//            if (string[i] != c) {
//                str[len] = string[i];
//                len++;
//            }
//        }
//        str[len] = NULL;
//        strcpy(this->string, str);
//
//    }
//    void operator--(int)
//    {
//        int l = strlen(this->string);
//        this->string[l - 1] = NULL;
//    }
//
//    void operator&&(char c)
//    {
//        for (int i = 0; i < strlen(this->string); i++)
//        {
//            if (this->string[i] != c)
//            {
//                this->string[i] = '0';
//            }
//        }
//    }
//
//};
//
//
//int main() {
//    int count = 0;
//    int num;
//    char str[100] = { '\0' };
//    char c;
//    mystring p;
//
//    while (1) {
//        cout << "Please Enter command(1 : add, 2 : delete_char, 3 : delete_lastchar, 4 : and_operator, 5 : print, 6 : exit) : ";
//        cin >> num;
//        if (num == 1) {
//
//            cin >> str;
//            p += str;
//
//        }
//        else if (num == 2)
//        {
//            cin >> c;
//            p -= c;
//
//        }
//        else if (num == 3) {
//            p--;
//
//        }
//        else if (num == 4)
//        {
//            cin >> c;
//            p&& c;
//        }
//        else if (num == 5)
//        {
//            p.print();
//        }
//        else if (num == 6)
//        {
//            return 0;
//        }
//    }
//    return 0;
//  }

//----------------------------------------------------
// 3-1 4번

//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Node
//{
//public:
//   Node* next;
//   Node* prev;
//   int id = 0;
//   char name[10] = {0, };
//
//};
//
//class doublelinklist
//{
//private:
//   Node* head;
//   Node* tail;
//public:
//   doublelinklist()
//   {
//      head = tail = NULL;
//   }
//
//   void insert(char* n, int i)
//   {
//      Node* cur = head;
//      Node* add = new Node;
//      strcpy(add->name, n);
//      add->id = i;
//
//      if(head == NULL)
//      {
//         head = add;
//         tail = head;
//      }
//      else
//      {
//         while(cur != NULL)
//         {
//            if(i > cur->id)
//            {
//               if(cur->next == NULL)
//               {
//                  add->prev = cur;
//                  cur->next = add;
//                  tail = add;
//                  break;
//               }
//               else
//               {
//                  cur = cur->next;
//               }
//            }
//            else if(i < cur->id)
//            {
//               if(cur->prev == NULL)
//               {
//                  add->next = cur;
//                  add->prev = NULL;
//                  cur->prev = add;
//                  head = add;
//                  break;
//               }
//               else
//               {
//                  add->prev = cur->prev;
//                  add->next = cur->prev->next;
//                  cur->prev->next = add;
//                  cur-> = add;
//                  break;
//
//               }
//            }
//            else if(i == cur->id)
//            {
//               break;
//               return;
//            }
//         }
//      }
//   }
//   void print()
//   {
//      Node* p = head;
//      while(p != NULL)
//      {
//         cout << p->id << " " << p->name << endl;
//         p = p->next;
//      }
//   }
//   void print_reverse()
//   {
//      Node* p = tail;
//      while(p != NULL)
//      {
//         cout << p->id << " " << p->name << endl;
//         p = p->prev;
//      }
//   }
//   void sort_by_name()
//   {
//      Node* p = head;
//      Node* temp = NULL;
//
//      int id_tmp = 0;
//      char name_tmp[10] = {0, };
//
//      if (head == NULL)
//      {
//         return;
//      }
//      for(p = head; p->next != NULL; p = p->next)
//      {
//         for(temp = p->next; temp != NULL; temp = temp->next)
//         {
//            if (strcmp(p->name ,temp->name) > 0)
//            {
//               id_tmp = p->id;
//               p->id = temp->id;
//               temp->id = id_tmp;
//
//               strcpy(name_tmp,p->name);
//               strcpy(p->name, temp->name);
//               strcpy(temp->name, name_tmp);
//            }
//         }
//      }
//   }
//   void sort_by_ID()
//   {
//      Node* p = head;
//      Node* temp = NULL;
//
//      int id_tmp = 0;
//      char name_tmp[10] = {0, };
//
//      if (head == NULL)
//      {
//         return;
//      }
//      for(p = head; p->next != NULL; p = p->next)
//      {
//         for(temp = p->next; temp != NULL; temp = temp->next)
//         {
//            if (p->id > temp->id)
//            {
//               id_tmp = p->id;
//               p->id = temp->id;
//               temp->id = id_tmp;
//
//               strcpy(name_tmp,p->name);
//               strcpy(p->name, temp->name);
//               strcpy(temp->name, name_tmp);
//            }
//         }
//      }
//   }
//   void _delete(int id)
//   {
//      Node* p = head;
//      Node* temp1;
//
//      if(id == head->id)
//      {
//         head = head->next;
//         if(head != NULL)
//         {
//            head->prev = NULL;
//         }
//         delete p;
//         return;
//      }
//
//      while(p != NULL)
//      {
//         if(p->id == id)
//         {
//            if (p->next == NULL)
//            {
//               temp1= p->prev;
//               temp1->next = NULL;
//               tail = temp1;
//               delete p;
//               return;
//            }
//            else
//            {
//               temp1 = p->prev;
//               temp1->next = p->next;
//               p->next->prev = temp1;
//               delete p;
//               return;
//            }
//         }
//         p = p->next;
//      }
//   }
//};
//
//
//int main(void)
//{
//   doublelinklist p;
//   int n = 0;
//   int id = 0;
//   char name[10] = {'\0'};
//   while(true)
//   {
//      cout << "Please Enter command(1 : insert, 2 : print, 3 : print_reverse, 4 : sort_by_name, 5 : sort_by_ID, 6 : delete, 7 : exit) : ";
//      cin >> n;
//      if (n == 1)
//      {
//         cin >> id >> name;
//         p.insert(name, id);
//      }
//      else if (n == 2)
//      {
//         p.print();
//      }
//      else if (n == 3)
//      {
//         p.print_reverse();
//      }
//      else if (n == 4)
//      {
//         p.sort_by_name();
//      }
//      else if (n == 5)
//      {
//         p.sort_by_ID();
//      }
//      else if (n == 6)
//      {
//         cin >> id;
//         p._delete(id);
//      }
//      else if(n == 7)
//      {
//         return 0;
//      }
//   }
//   return 0;
//}

//----------------------------------------
// 3-3 1번
//
//#include <iostream>
//using namespace std;
//
//class Node
//{
//public:
//   Node* Left;
//   Node* Right;
//   int data;
//};
//
//class Tree
//{
//
//private:
//   Node* Root;
//   Node* Leaf;
//
//public:
//   Tree()
//   {
//      Root = Leaf = NULL;
//   }
//   void postorder(Node* pointer){
//       if(pointer){
//           // pointer가 null이 아니라면
//           postorder(pointer->Left);
//           postorder(pointer->Right);
//           delete pointer;
//       }
//       cout << "\n";
//   }
//
//   Node* return_Root()
//   {
//      Node* cur = Root;
//      return cur;
//   }
//
//
//   void insert(int d)
//   {
//      Node* cur = Root;
//      Node* add = new Node;
//      add->data = d;
//      add->Right = NULL;
//      add->Left = NULL;
//
//      if (Root == NULL)
//      {
//         Root = add;
//         Leaf = add;
//      }
//      else
//      {
//         while (cur != NULL)
//         {
//            if (d > cur->data)
//            {
//               if (cur->Right == NULL)
//               {
//                  cur->Right = add;
//                  Leaf = add;
//                  break;
//               }
//               cur = cur->Right;
//            }
//            else if (d < cur->data)
//            {
//               if (cur->Left == NULL)
//               {
//                  cur->Left = add;
//                  Leaf = add;
//                  break;
//               }
//               cur = cur->Left;
//            }
//            else if (d == cur->data)
//            {
//               break;
//            }
//         }
//      }
//   }
//
//   void find(int d)
//   {
//      Node* cur = Root;
//      int cnt = 0;
//
//      while(cur != NULL)
//      {
//         if (cur->data > d)
//         {
//            cur = cur->Left;
//         }
//         else if(cur->data < d)
//         {
//            cur = cur->Right;
//         }
//         else if(cur->data == d)
//         {
//            cnt = 1;
//            break;
//         }
//      }
//
//      if (cnt == 1)
//      {
//         cur = Root;
//
//         cout << "Path : " ;
//         while(cur != NULL)
//         {
//            if (cur->data > d)
//            {
//               cout << cur->data << "->";
//               cur = cur->Left;
//            }
//            else if(cur->data < d)
//            {
//               cout << cur->data << "->";
//               cur = cur->Right;
//            }
//            else if(cur->data == d)
//            {
//               cout << cur->data << endl; ;
//               return;
//            }
//         }
//      }
//      else
//      {
//         return;
//      }
//   }
//
//   Node* getmin(Node* node)
//   {
//      Node* curr = node;
//
//      while (curr && curr->Left != NULL)
//      {
//         curr = curr->Left;
//      }
//
//      return curr;
//   }
//   Node* getmin_par(Node* node)
//   {
//      Node* curr = node;
//      Node* par = NULL;
//
//      while (curr && curr->Left != NULL)
//      {
//         par = curr;
//         curr = curr->Left;
//      }
//
//      return par;
//   }
//
//   void Delete(int d)
//   {
//      Node* cur = Root;
//      Node* pre = NULL;
//      Node* min_par = NULL;
//      Node* temp = NULL;
//
//      int cnt = 0;
//
//      while(cur != NULL)
//      {
//         if (cur->data > d)
//         {
//            pre = cur;
//            cur = cur->Left;
//            cnt = 1;
//         }
//         else if(cur->data < d)
//         {
//            pre = cur;
//            cur = cur->Right;
//            cnt = 2;
//         }
//         else if(cur->data == d)
//         {
//            if (cur->Left == NULL && cur->Right == NULL)
//            {
//               delete cur;
//               return;
//            }
//            else if(cur->Left == NULL && cur->Right != NULL)
//            {
//               if (cnt == 1)
//               {
//                  pre->Left = cur->Right;
//                  delete cur;
//                  return;
//               }
//               else if(cnt == 2)
//               {
//                  pre->Right = cur->Right;
//                  delete cur;
//                  return;
//               }
//               else if(cnt == 0)
//               {
//                  temp = getmin(cur->Right);
//                  min_par = getmin_par(cur->Right);
//                  if (min_par == NULL)
//                  {
//                     temp->Left = Root->Left;
//                     temp->Right = Root->Right->Right;
//                     Root = temp;
//                     delete cur;
//                     return;
//                  }
//                  else
//                  {
//                     min_par->Right = temp->Right;
//                     temp->Left = Root->Left;
//                     temp->Right = Root->Right;
//                     Root = temp;
//                     delete cur;
//                     return;
//                  }
//
//               }
//            }
//            else if(cur->Left != NULL && cur->Right == NULL)
//            {
//               if (cnt == 1)
//               {
//                  pre->Left = cur->Left;
//                  delete cur;
//                  return;
//               }
//               else if(cnt == 2)
//               {
//                  pre->Right = cur->Left;
//                  delete cur;
//                  return;
//               }
//               else if(cnt == 0)
//               {
//                  pre = cur;
//                  cur = cur->Left;
//                  delete pre;
//                  return;
//               }
//
//            }
//            else if(cur->Left != NULL && cur->Right != NULL)
//            {
//               if (cnt == 1)
//               {
//                  temp = getmin(cur->Right);
//                  min_par = getmin_par(cur->Right);
//                  if (min_par == NULL)
//                  {
//                     temp->Left = cur->Left;
//                     temp->Right = cur->Right->Right;
//                     pre->Left = temp;
//                     delete cur;
//                     return;
//                  }
//                  else
//                  {
//                     min_par->Left = temp->Right;
//                     temp->Left = cur->Left;
//                     temp->Right = cur->Right;
//                     delete cur;
//                     return;
//                  }
//               }
//               else if(cnt == 2)
//               {
//                  temp = getmin(cur->Right);
//                  min_par = getmin_par(cur->Right);
//                   if (min_par == NULL)
//                   {
//                      temp->Left = cur->Left;
//                      temp->Right = cur->Right->Right;
//                      pre->Right = temp;
//                      delete cur;
//                      return;
//                   }
//                   else
//                   {
//                      min_par->Left = temp->Right;
//                      temp->Left = cur->Left;
//                      temp->Right = cur->Right;
//                      delete cur;
//                      return;
//                   }
//               }
//               else if(cnt == 0)
//               {
//                  temp = getmin(cur->Right);
//                  min_par = getmin_par(cur->Right);
//
//                  if (min_par == NULL)
//                  {
//                     temp->Left = Root->Left;
//                     temp->Right = Root->Right->Right;
//                     Root = temp;
//                     delete cur;
//                     return;
//                  }
//                  else
//                  {
//                     min_par->Left = temp->Right;
//                     temp->Left = Root->Left;
//                     temp->Right = Root->Right;
//                     Root = temp;
//                     delete cur;
//                     return;
//                  }
//               }
//            }
//            break;
//         }
//      }
//   }
//};
//
//int main(void)
//{
//   Tree t;
//   int command = 0;
//   int data = 0;
//
//   while(true)
//   {
//      cout << "Enter Ant Command(1 : Insert, 2 : Delete, 3 : Find, 4 : Exit) : ";
//      cin >> command;
//      if (command == 1)
//      {
//         cin >> data;
//         t.insert(data);
//      }
//      else if (command == 2)
//      {
//         cin >> data;
//         t.Delete(data);
//      }
//      else if (command == 3)
//      {
//         cin >> data;
//         t.find(data);
//      }
//      else if (command == 4)
//      {
//         break;
//      }
//   }
//
//   t.postorder(t.return_Root());
//
//   return 0;
//}
//
//----------------------------------------------------

//#include <iostream>
//using namespace std;
//
//class item
//{
//private:
//   int price;
//   int stock;
//   int discount;
//public:
//   item(int price, int stock)
//   {
//      this->price = price;
//      this->stock = stock;
//      discount = 0;
//   }
//
//   int getprice()
//   {
//      return price;
//   }
//
//   int getstock()
//   {
//      return stock;
//   }
//
//   int getdiscount()
//   {
//      return discount;
//   }
//
//   void addstock(int num)
//   {
//      this->stock += num;
//   }
//   void sell_item(int num)
//   {
//      this->stock -= num;
//   }
//   void setdiscount(int num)
//   {
//      discount = num;
//   }
//
//};
//
//class Pen : public item
//{
//public:
//   Pen(int price, int stock) : item(price, stock)
//   {
//
//   }
//};
//
//int main(void)
//{
//
//}

//-------------------------------------------------------------
//
//#include <iostream>
//#include <cstring>
//#include <fstream>
//
//using namespace std;
//
//class wordnode
//{
//public:
//   char* word;
//   wordnode* next;
//};
//
//class alpha
//{
//public:
//   char c;
//   alpha* next;
//   wordnode* h;
//};
//
//class Link_2d
//{
//private:
//   alpha* head_a;
//   alpha* tail_a;
//public:
//   Link_2d()
//   {
//      head_a = tail_a = NULL;
//   }
//
//   void insert_alpha()
//   {
//      alpha* cur = head_a;
//      alpha* add = new alpha;
//
//      for (int i = 0; i < 26; i++)
//      {
//         char cc = i+65;
//         add->c = cc;
//         if (head_a == NULL)
//         {
//            head_a = add;
//            tail_a = head_a;
//         }
//         else
//         {
//            cur->next = add;
//            tail_a = add;
//            cur = cur->next;
//         }
//      }
//   }
//
//};
//
//int main(void)
//{
//   fstream f;
//   Link_2d link;
//   f.open("Assignment.txt", ios::in);
//
//   link.insert_alpha();
//   while (!f.eof())
//   {
//      string temp;
//      getline(f, temp);
//
//      char* ch = new char[temp.length() + 1];
//      ch[temp.length()] = '\0';
//      copy(temp.begin(), temp.end(), ch);
//
//      delete[] ch;
//
//      cout << temp  << " " << ch << "\n";
//   }
//}
//
//============================================
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class item {
//private:
//   int price;
//   int stock;
//   int discount;
//
//public:
//   item(int price, int stock) {
//      this->price = price;
//      this->stock = stock;
//      discount = 0;
//   }
//   int getprice() { return price; }
//   int getstock() { return stock; }
//   int getdiscount() { return discount; }
//   void addstock(int num) { this->stock += num; }
//   void sell_item(int num) { this->stock -= num; }
//   void setdiscount(int num) { discount = num; }
//};
//class Pen : public item
//{
//public:
//   Pen(int price, int stock) :item(price, stock){};
//   int sales(int num) {
//      return getprice() * num *((100 - getdiscount()) / 100);
//   }
//
//   void print() {
//      cout << "======================" << endl;
//      cout << "---------Pen-----------" << endl;
//      cout << "Price : 600" << endl;
//      cout << "Stock : "<< getstock() << endl;
//      cout << "Discount : "<< getdiscount() << "%" << endl;
//      cout << "-----------------------" << endl;
//   }
//};
//class Pencil : public item
//{public:
//   Pencil(int price, int stock) :item(price, stock) {};
//   int sales(int num) {
//      return getprice() * num * ((100 - getdiscount()) / 100);
//   }
//
//   void print() {
//      cout << "---------Pencil--------" << endl;
//      cout << "Price : 1200" << endl;
//      cout << "Stock : " << getstock() << endl;
//      cout << "Discount : " << getdiscount() << "%" << endl;
//      cout << "-----------------------" << endl;
//   }
//};
//
//class Eraser : public item
//{
//public:
//   Eraser(int price, int stock) :item(price, stock) {};
//   int sales(int num)
//   {
//      return getprice() * num * ((100-getdiscount())/(float)100);
//   }
//
//   void print() {
//      cout << "---------Eraser--------" << endl;
//      cout << "Price : 500" << endl;
//      cout << "Stock : " << getstock() <<  endl;
//      cout << "Discount : " << getdiscount() <<"%" << endl;
//      cout << "-----------------------" << endl;
//      cout << "=======================" << endl;
//   }
//};
//
//int main() {
//   int command;
//   string thing;
//   int num;
//   int total_sales=0;
//   Pen pen(600, 100);
//   Pencil pencil(1200, 100);
//   Eraser eraser(500, 100);
//   pen.print();
//   pencil.print();
//   eraser.print();
//   while (1) {
//      cout << "Enter Any Command(0 : Sell, 1: AddStock, 2: Discount, 3:Print, 4: Quit) :";
//      cin >> command ;
//
//      if (command == 0) {
//         cin >> thing >> num;
//         if (thing == "Pen") {
//            if (3 * num > pen.getstock())continue;
//            total_sales += pen.sales(num);
//            cout << pen.sales(num)<<endl;
//            cout << total_sales<<endl;
//            pen.sell_item(3*num);
//            cout << "=======================" << endl;
//            cout << "Sales : " << total_sales << endl;
//            cout << "=======================" << endl;
//         }
//         else if (thing == "Pencil") {
//            if (3 * num > pen.getstock())continue;
//            total_sales += pencil.sales(num);
//            pencil.sell_item(12 * num);
//            cout << "=======================" << endl;
//            cout << "Sales : " << total_sales << endl;
//            cout << "=======================" << endl;
//         }
//         else if (thing == "Eraser") {
//            if (3 * num > pen.getstock())continue;
//            total_sales += eraser.sales(num);
//            eraser.sell_item(1 * num);
//            cout << "=======================" << endl;
//            cout << "Sales : " << total_sales << endl;
//            cout << "=======================" << endl;
//         }
//      }
//      if (command == 1) {
//         cin >> thing >> num;
//         if (thing == "Pen") {
//            pen.addstock(num);
//            cout << "=======================" << endl;
//            cout << "Sales : " << total_sales << endl;
//            cout << "=======================" << endl;
//         }
//         else if (thing == "Pencil") {
//            pencil.addstock( num);
//            cout << "=======================" << endl;
//            cout << "Sales : " << total_sales << endl;
//            cout << "=======================" << endl;
//         }
//         else if (thing == "Eraser") {
//            eraser.addstock( num);
//            cout << "=======================" << endl;
//            cout << "Sales : " << total_sales << endl;
//            cout << "=======================" << endl;
//         }
//      }
//      if (command == 2) {
//         cin >> thing >> num;
//         if (thing == "Pen") {
//            pen.setdiscount(num);
//            cout << "=======================" << endl;
//            cout << "Sales : " << total_sales << endl;
//            cout << "=======================" << endl;
//         }
//         else if (thing == "Pencil") {
//            pencil.setdiscount(num);
//            cout << "=======================" << endl;
//            cout << "Sales : " << total_sales << endl;
//            cout << "=======================" << endl;
//         }
//         else if (thing == "Eraser") {
//            eraser.setdiscount(num);
//            cout << "=======================" << endl;
//            cout << "Sales : " << total_sales << endl;
//            cout << "=======================" << endl;
//         }
//      }
//      if (command == 3) {
//         pen.print();
//         pencil.print();
//         eraser.print();
//         cout << "=======================" << endl;
//         cout << "Sales : " << total_sales << endl;
//         cout << "=======================" << endl;
//      }
//      if (command == 4) break;
//   }
//}

//--------------------------------------------
// 3-3 2번

//#include <iostream>
//#include <string>
//#include <cstring>
//#include <fstream>
//
//using namespace std;
//
//class Node
//{
//public:
//   Node* next;
//   Node* prev;
//   string name;
//};
//
//class circle
//{
//private:
//   Node* head;
//   Node* tail;
//public:
//    circle()
//    {
//      head = tail = NULL;
//    }
//    void insert(string s)
//    {
//      Node* cur = head;
//      Node* add = new Node;
//      add->name = s;
//
//      if(head == NULL)
//      {
//         head = add;
//         tail = head;
//      }
//      else
//      {
//         add->prev = tail;
//         add->next = head;
//         head->prev = add;
//         tail->next = add;
//         tail = add;
//      }
//    }
//    void print()
//    {
//      Node* cur = head;
//      while(cur != tail)
//      {
//         cout << cur->name << "->";
//         cur = cur->next;
//      }
//      cout << "\n";
//    }
//    void find()
//    {
//
//    }
//
//};
//
//class link
//{
//private:
//   Node* head;
//   Node* tail;
//public:
//    link()
//    {
//       head = NULL;
//       tail = NULL;
//    }
//    void insert(string s)
//    {
//        Node* cur = head;
//        Node* add = new Node;
//        add->name = s;
//
//        if(head == NULL)
//        {
//           head = add;
//           tail = head;
//        }
//        else
//        {
//            add->prev = tail;
//            tail->next = add;
//            tail = add;
//        }
//    }
//    void print()
//    {
//       Node* cur = head;
//       while(cur != NULL)
//       {
//          cout << cur->name << "->";
//          cur = cur->next;
//       }
//       cout << "\n";
//    }
//};
//
//int main(void)
//{
//    fstream file1;
//    fstream file2;
//
//    string first;
//    string second;
//
//
//
//    circle c;
//    link l;
//    file1.open("Assignment3-3-2-2.txt", ios::in);
//    while (!file1.eof())
//    {
//      string temp;
//      getline(file1, temp);
//      c.insert(temp);
//    }
//    file1.close();
//
//    file2.open("Assignment3-3-2-1.txt", ios::in);
//    while (!file2.eof())
//    {
//      string temp;
//      getline(file2, temp);
//      l.insert(temp);
//    }
//    file2.close();
//
//    cout << "출발역 : ";
//    cin >> first;
//    cout << "도착역 : ";
//    cin >> second;
//
//
//
//    c.print();
//
//    l.print();
//
//    return 0;
//}



//--------------------------------------------
// 3-3 2번
//
//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//class node
//{
//public:
//    node* next;
//    string menu;
//    int time;
//};
//
//class Bob
//{
//private:
//    node* head;
//    node* tail;
//public:
//    Bob()
//    {
//        head = NULL;
//        tail = NULL;
//    }
//    void insert(string m, int t)
//    {
//        node* cur = head;
//        node* add = new node;
//        add->menu = m;
//        add->time = t;
//
//        if(head == NULL)
//        {
//            head = add;
//            tail = head;
//            return;
//        }
//        else
//        {
//            tail->next = add;
//            tail = add;
//            return;
//        }
//    }
//
//    void print()
//    {
//        node* cur = head;
//        while(cur != NULL)
//        {
//            cout << cur->menu << " " << cur->time << endl;
//            cur = cur->next;
//        }
//        return;
//    }
//};
//
//class John
//{
//private:
//    node* head;
//    node* tail;
//public:
//    John()
//    {
//        head = NULL;
//        tail = NULL;
//    }
//    void insert(string m, int t)
//    {
//        node* cur = head;
//        node* add = new node;
//        add->menu = m;
//        add->time = t;
//
//        if(head == NULL)
//        {
//            head = add;
//            tail = head;
//            return;
//        }
//        else
//        {
//            tail->next = add;
//            tail = add;
//            return;
//        }
//    }
//
//    void print()
//    {
//        node* cur = head;
//        while(cur != NULL)
//        {
//            cout << cur->menu << " " << cur->time << endl;
//            cur = cur->next;
//        }
//        return;
//    }
//};
//
//class Jack
//{
//private:
//    node* head;
//    node* tail;
//public:
//    Jack()
//    {
//        head = NULL;
//        tail = NULL;
//    }
//    void insert(string m, int t)
//    {
//        node* cur = head;
//        node* add = new node;
//        add->menu = m;
//        add->time = t;
//
//        if(head == NULL)
//        {
//            head = add;
//            tail = head;
//            return;
//        }
//        else
//        {
//            tail->next = add;
//            tail = add;
//            return;
//        }
//    }
//
//    void print()
//    {
//        node* cur = head;
//        while(cur != NULL)
//        {
//            cout << cur->menu << " " << cur->time << endl;
//            cur = cur->next;
//        }
//        return;
//    }
//};
//
//
//int main(void)
//{
//    fstream f;
//    f.open("Assignment3-3-3-1.txt", ios::in);
//
//    Jack jack;
//    Bob bob;
//    John john;
//
//    while(!f.eof())
//    {
//        string name;
//        string menu;
//        int time;
//        f >> name;
//        f >> menu;
//        f >> time;
//
//        cout << name << " " <<  menu << " " << time << endl;
//
//        if (name == "Jack")
//        {
//            jack.insert(menu, time);
//        }
//        else if (name == "Bob")
//        {
//            bob.insert(menu, time);
//        }
//        else if (name == "John")
//        {
//            john.insert(menu, time);
//        }
//    }
//    jack.print();
//
//    bob.print();
//
//    john.print();
//}

//--------------------------------------------
// 3-3 3번
//
//#pragma warning(disable:4996)
//
//#include <iostream>
//#include <string>
//#include <fstream>
//
//using namespace std;
//
//class Node
//{
//public:
//    Node* next;
//    string food;
//    int time;
//};
//
//class Bob
//{
//private:
//    Node* head;
//    Node* tail;
//public:
//    Bob()
//    {
//        head = NULL;
//        tail = NULL;
//    }
//    void insert(string m, int t)
//    {
//        Node* add = new Node;
//        add->food = m;
//        add->time = t;
//
//        if (head == NULL)
//        {
//            head = add;
//            tail = head;
//            return;
//        }
//        else
//        {
//            tail->next = add;
//            tail = tail->next;
//            return;
//        }
//    }
//
//    void print()
//    {
//        Node* cur = head;
//         cout << "BOB" << endl;
//        while (cur != NULL)
//        {
//            cout << cur->food << " " << cur->time << endl;
//            cur = cur->next;
//        }
//        return;
//    }
//    Node* find(string menu)
//    {
//        Node* cur = head;
//        while (cur != NULL)
//        {
//            if (cur->food == menu)
//                return cur;
//            cur = cur->next;
//        }
//        return NULL;
//    }
//};
//
//class John
//{
//private:
//    Node* head;
//    Node* tail;
//public:
//    John()
//    {
//        head = NULL;
//        tail = NULL;
//    }
//    void insert(string m, int t)
//    {
//        Node* add = new Node;
//        add->food = m;
//        add->time = t;
//
//        if (head == NULL)
//        {
//            head = add;
//            tail = head;
//            return;
//        }
//        else
//        {
//            tail->next = add;
//            tail = tail->next;
//            return;
//        }
//    }
//
//    void print()
//    {
//        Node* cur = head;
//        cout << "John" << endl;
//        while (cur != NULL)
//        {
//            cout << cur->food << " " << cur->time << endl;
//            cur = cur->next;
//        }
//        return;
//    }
//    Node* find(string menu)
//    {
//        Node* cur = head;
//        while (cur != NULL)
//        {
//            if (cur->food == menu)
//                return cur;
//            cur = cur->next;
//        }
//        return NULL;
//    }
//};
//
//class Jack
//{
//private:
//    Node* head;
//    Node* tail;
//public:
//    Jack()
//    {
//        head = NULL;
//        tail = NULL;
//    }
//    void insert(string m, int t)
//    {
//
//        Node* add = new Node;
//        add->food = m;
//        add->time = t;
//
//        if (head == NULL)
//        {
//            head = add;
//            tail = head;
//            return;
//        }
//        else
//        {
//            tail->next = add;
//            tail = tail->next;
//            return;
//        }
//    }
//
//    void print()
//    {
//        Node* cur = head;
//        cout << "Jack" << endl;
//        while (cur != NULL)
//        {
//            cout << cur->food << " " << cur->time << endl;
//            cur = cur->next;
//        }
//        return;
//    }
//
//    Node* find(string menu)
//    {
//        Node* cur = head;
//        while (cur != NULL)
//        {
//            if (cur->food == menu)
//                return cur;
//            cur = cur->next;
//        }
//        return NULL;
//    }
//};
//
//class que_bob : public Bob
//{
//private:
//    Node* head;
//    Node* rear;
//public:
//    int count = 0;
//    int total_time = 0;
//
//    que_bob()
//    {
//        head = NULL;
//        rear = NULL;
//    }
//    bool empty()
//    {
//        if (head == NULL)
//        {
//            return true;
//        }
//        else
//        {
//            return false;
//        }
//    }
//    void in_que(string m, int t)
//    {
//        Node* add = new Node;
//        add->food = m;
//        add->time = t;
//
//        if (head == NULL)
//        {
//            head = add;
//            rear = head;
//            return;
//        }
//        else
//        {
//            rear->next = add;
//            rear = rear->next;
//            return;
//        }
//    }
//
//    void pop()
//    {
//        Node* delNode;
//
//        delNode = head;
//        head = head->next;
//        delete delNode;
//
//    }
//    void print2()
//    {
//        count++;
//
//        if (!empty())
//        {
//            total_time += 1;
//
//            if (head->time -count== 0)
//            {
//                cout << "Done!" << "(" << head->food << ")";
//                count = 0;
//                pop();
//            }
//
//            else if (head->time -count > 0)
//            {
//                cout << "Cooking" << "(" << head->food << head->time - count << "/" << head->time << ")";
//
//            }
//        }
//        else
//        {
//            cout << "\t\t\t\t\t\t\t";
//        }
//    }
//
//};
//
//class que_john : public John
//{
//private:
//    Node* head;
//    Node* rear;
//public:
//    int count = 0;
//    int total_time = 0;
//
//    que_john()
//    {
//        head = NULL;
//        rear = NULL;
//    }
//
//    void in_que(string m, int t)
//    {
//        Node* add = new Node;
//        add->food = m;
//        add->time = t;
//
//        if (head == NULL)
//        {
//            head = add;
//            rear = head;
//            return;
//        }
//        else
//        {
//            rear->next = add;
//            rear = rear->next;
//            return;
//        }
//    }
//    bool empty()
//    {
//        if (head == NULL)
//        {
//            return true;
//        }
//        else
//        {
//            return false;
//        }
//    }
//    void pop()
//    {
//        Node* delNode;
//
//        delNode = head;
//        head = head->next;
//        delete delNode;
//
//    }
//    void print2()
//    {
//        count++;
//
//        if (!empty())
//        {
//            total_time += 1;
//
//            if (head->time -count== 0)
//            {
//                cout << "Done!" << "(" << head->food << ")";
//                count = 0;
//                pop();
//            }
//
//            else if (head->time -count > 0)
//            {
//                cout << "Cooking" << "(" << head->food << head->time - count << "/" << head->time << ")";
//
//            }
//        }
//        else
//        {
//            cout << "\t\t\t\t\t\t\t";
//        }
//    }
//};
//
//class que_jack : public Jack
//{
//private:
//    Node* head;
//    Node* rear;
//public:
//
//    int count = 0;
//    int total_time = 0;
//    que_jack()
//    {
//        head = NULL;
//        rear = NULL;
//    }
//
//    void in_que(string m, int t)
//    {
//        Node* add = new Node;
//        add->food = m;
//        add->time = t;
//
//        if (head == NULL)
//        {
//            head = add;
//            rear = head;
//            return;
//        }
//        else
//        {
//            rear->next = add;
//            rear = rear->next;
//            return;
//        }
//    }
//    bool empty()
//    {
//        if (head == NULL)
//        {
//            return true;
//        }
//        else
//        {
//            return false;
//        }
//    }
//    void pop()
//    {
//        Node* delNode;
//
//        delNode = head;
//        head = head->next;
//        delete delNode;
//
//    }
//
//    void print2()
//    {
//        count++;
//
//        if (!empty())
//        {
//            total_time += 1;
//
//            if (head->time -count== 0)
//            {
//                cout << "Done!" << "(" << head->food << ")";
//                count = 0;
//                pop();
//            }
//
//            else if (head->time -count > 0)
//            {
//                cout << "Cooking" << "(" << head->food << head->time - count << "/" << head->time << ")";
//
//            }
//        }
//        else
//        {
//            cout << "\t\t\t\t\t\t\t";
//        }
//    }
//};
//
//Jack jack;
//Bob bob;
//John john;
//
//que_jack ordered_jack;
//que_bob ordered_bob;
//que_john ordered_john;
//
//string food2;
//string cooker;
//
//
//void mm(string f, string c)
//{
//    string food = f;
//
//    if (c == "Jack")
//    {
//        if (jack.find(f) != NULL)
//        {
//            int t = jack.find(f)->time;
//            ordered_jack.in_que(f, t);
//            return;
//        }
//        else
//        {
//            cout << "Pick Cooker : ";
//            cin >> cooker;
//            mm(food,cooker);
//        }
//    }
//    else if(c == "Bob")
//    {
//        if (bob.find(f) != NULL)
//        {
//            int t = bob.find(f)->time;
//            ordered_bob.in_que(f, t);
//            return;
//        }
//        else
//        {
//            cout << "Pick Cooker : ";
//            cin >> cooker;
//            mm(food,cooker);
//        }
//    }
//    else if(c == "John")
//    {
//        if (john.find(f) != NULL)
//        {
//            int t = john.find(f)->time;
//            ordered_john.in_que(f, t);
//            return;
//        }
//        else
//        {
//            cout << "Pick Cooker : ";
//            cin >> cooker;
//            mm(food,cooker);
//        }
//    }
//    return;
//}
//
//int main()
//{
//    fstream f;
//    f.open("Assignment3-3-3-1.txt", ios::in);
//
//    while (!f.eof())
//    {
//        string name;
//        string menu;
//        int time;
//        f >> name;
//        f >> menu;
//        f >> time;
//
//
//        if (name == "Jack")
//        {
//            jack.insert(menu, time);
//        }
//        else if (name == "Bob")
//        {
//            bob.insert(menu, time);
//        }
//        else if (name == "John")
//        {
//            john.insert(menu, time);
//        }
//    }
//
//    f.close();
//
//    fstream f2;
//    f2.open("Assignment3-3-3-2.txt");
//
//    while (!f2.eof())
//    {
//        f2 >> food2;
//        cout << "New order : " << food2 << endl;
//        cout << "Pick Cooker : ";
//        cin >> cooker;
//
//        mm(food2, cooker);
//    }
//    f.close();
//
//    while (!ordered_bob.empty() || !ordered_jack.empty() || !ordered_john.empty())
//    {
//        cout << "\t";
//        ordered_jack.print2();
//        cout << "\t\t\t";
//        ordered_bob.print2();
//        cout << "\t\t\t";
//        ordered_john.print2();
//        cout << endl;
//    }
//}
//--------------------------------------------
// 3-3 3번 예은.ver

//#pragma warning(disable:4996)
//#include <iostream>
//#include <string>
//#include <fstream>
//#include<iomanip>
//using namespace std;
//
//class Node
//{
//public:
//    Node* next;
//    string food;
//    int time;
//};
//
//class Bob
//{
//private:
//    Node* head;
//    Node* tail;
//public:
//    int total_time = 0;
//    int count = 0;
//    Bob()
//    {
//        head = NULL;
//        tail = NULL;
//    }
//    void insert(string m, int t){
//        Node* add = new Node;
//        add->food = m;
//        add->time = t;
//
//        if (head == NULL)
//        {
//            head = add;
//            tail = head;
//            return;
//        }
//        else
//        {
//            tail->next = add;
//            tail = add;
//            return;
//        }
//    }
//
//    Node* find(string menu) {
//        Node* cur = head;
//        while (cur != NULL) {
//            if (cur->food == menu)
//                return cur;
//            cur = cur->next;
//        }
//        return NULL;
//    }
//    void pop() {
//        Node* delNode;
//        delNode = head;
//        head = head->next;
//        delete delNode;
//
//    }
//    void print2() {
//
//        count++;
//
//        if (!empty()) {
//            total_time += 1;
//
//            if (head->time -count== 0) {
//                cout << "Done!" << "(" << head->food << ")";
//                count = 0;
//                pop();
//            }
//
//            else if (head->time -count > 0) {
//                cout << "Cooking" << "(" << head->food << head->time - count << "/" << head->time << ")";
//
//            }
//
//        }
//        else {
//
//            cout << "                                           ";
//        }
//    }
//    bool empty()
//    {
//        if (head == NULL)
//        {
//            return true;
//        }
//        else
//        {
//            return false;
//        }
//    }
//};
//
//class John
//{
//private:
//    Node* head;
//    Node* tail;
//public:
//    int total_time = 0;
//    int count = 0;
//    John()
//    {
//        head = NULL;
//        tail = NULL;
//    }
//    void insert(string m, int t)
//    {
//        Node* add = new Node;
//        add->food = m;
//        add->time = t;
//
//        if (head == NULL)
//        {
//            head = add;
//            tail = head;
//            return;
//        }
//        else
//        {
//            tail->next = add;
//            tail = add;
//            return;
//        }
//    }
//
//
//    Node* find(string menu) {
//        Node* cur = head;
//        while (cur != NULL) {
//            if (cur->food == menu)
//                return cur;
//            cur = cur->next;
//        }
//        return NULL;
//    }
//    void pop() {
//        Node* delNode;
//
//        delNode = head;
//        head = head->next;
//        delete delNode;
//
//    }
//    void print2() {
//        count++;
//        if (!empty()) {
//
//            total_time += 1;
//
//            if (head->time -count == 0) {
//                cout << "Done!" << "(" << head->food << ")";
//                count = 0;
//                pop();
//            }
//            else if (head->time -count> 0) {
//                cout << "Cooking" << "(" << head->food << head->time - count << "/" << head->time << ")";
//            }
//
//        }
//        else {
//            cout << "                                ";
//        }
//    }
//    bool empty()
//    {
//        if (head == NULL)
//        {
//            return true;
//        }
//        else
//        {
//            return false;
//        }
//    }
//};
//
//class Jack
//{
//private:
//    Node* head;
//    Node* tail;
//public:
//    int total_time = 0;
//    int count = 0;
//    Jack()
//    {
//        head = NULL;
//        tail = NULL;
//    }
//    void insert(string m, int t)
//    {
//
//        Node* add = new Node;
//        add->food = m;
//        add->time = t;
//
//        if (head == NULL)
//        {
//            head = add;
//            tail = head;
//            return;
//        }
//        else
//        {
//            tail->next = add;
//            tail = add;
//            return;
//        }
//    }
//
//    Node* find(string menu) {
//        Node* cur = head;
//        while (cur != NULL) {
//            if (cur->food == menu)
//                return cur;
//            cur = cur->next;
//        }
//        return NULL;
//    }
//    void pop() {
//        Node* delNode;
//
//        delNode = head;
//        head = head->next;
//        delete delNode;
//
//    }
//    void print2()
//    {
//        count++;
//        if (!empty())
//        {
//            total_time += 1;
//
//            if (head->time -count== 0)
//            {
//                cout << "Done!" << "(" << head->food << ")";
//                count = 0;
//                pop();
//            }
//
//            else if(head->time -count > 0)
//            {
//                cout << "Cooking" << "(" << head->food << head->time - count << "/" << head->time << ")";
//            }
//        }
//        else
//        {
//            cout << "                                       ";
//        }
//    }
//    bool empty()
//    {
//        if (head == NULL)
//        {
//            return true;
//        }
//        else
//        {
//            return false;
//        }
//    }
// };
//
//Jack jack;
//Bob bob;
//John john;
//
//Jack ordered_jack;
//Bob ordered_bob;
//John ordered_john;
//
//
//void menu(Jack& jack, Bob& bob, John& john, Jack& ordered_jack, Bob& ordered_bob, John& ordered_john, string f, string c)
//{
//    string food = f;
//    string cooker;
//
//    if (c == "Jack")
//    {
//        if (jack.find(f) != NULL)
//        {
//            int t = jack.find(f)->time;
//            ordered_jack.insert(f, t);
//            return;
//        }
//        else
//        {
//            cout << "Pick Cooker : ";
//            cin >> cooker;
//            menu(jack, bob, john, ordered_jack, ordered_bob, ordered_john, food, cooker);
//        }
//    }
//    else if(c == "Bob")
//    {
//        if (bob.find(f) != NULL)
//        {
//            int t = bob.find(f)->time;
//            ordered_bob.insert(f, t);
//            return;
//        }
//        else
//        {
//            cout << "Pick Cooker : ";
//            cin >> cooker;
//            menu(jack, bob, john, ordered_jack, ordered_bob, ordered_john, food,cooker);
//        }
//    }
//    else if(c == "John")
//    {
//        if (john.find(f) != NULL)
//        {
//            int t = john.find(f)->time;
//            ordered_john.insert(f, t);
//            return;
//        }
//        else
//        {
//            cout << "Pick Cooker : ";
//            cin >> cooker;
//            menu(jack, bob, john, ordered_jack, ordered_bob, ordered_john, food,cooker);
//        }
//    }
//    return;
//}
//
//int main() {
//    fstream f;
//    f.open("Assignment3-3-3-1.txt", ios::in);
//
//    while (!f.eof())
//    {
//        string name;
//        string menu;
//        int time;
//        f >> name;
//        f >> menu;
//        f >> time;
//
//
//        if (name == "Jack")
//        {
//            jack.insert(menu, time);
//        }
//        else if (name == "Bob")
//        {
//            bob.insert(menu, time);
//        }
//        else if (name == "John")
//        {
//            john.insert(menu, time);
//        }
//    }
//
//    fstream f2;
//    string food2;
//    string cook;
//    f2.open("Assignment3-3-3-2.txt");
//
//
//
//    while (!f2.eof()) {
//        f2 >> food2;
//        cout << "New order : " << food2 << endl;
//        cout << "Pick Cooker : ";
//        cin >> cook;
//
//        menu(jack, bob, john, ordered_jack, ordered_bob, ordered_john, food2, cook);
//    }
//
//    while (!ordered_bob.empty() || !ordered_jack.empty() || !ordered_john.empty()) {
//
//        ordered_jack.print2();
//        cout << setw(20);
//        ordered_bob.print2();
//        cout << setw(20);
//        ordered_john.print2();
//        cout << endl;
//    }
//
//    if (ordered_jack.total_time >= ordered_bob.total_time && ordered_jack.total_time >= ordered_john.total_time) {
//        cout << "Total Time is :" << ordered_jack.total_time << endl;
//    }
//    else if (ordered_bob.total_time >= ordered_jack.total_time && ordered_bob.total_time >= ordered_john.total_time) {
//        cout << "Total Time is :" << ordered_bob.total_time << endl;
//    }
//    else if (ordered_john.total_time >= ordered_bob.total_time && ordered_john.total_time >= ordered_jack.total_time) {
//        cout << "Total Time is :" << ordered_john.total_time << endl;
//    }
//}
//--------------------------------------------
// 3-3 4번

//#pragma warning(disable:4996)
//#include <iostream>
//#include <fstream>
//#include <cstring>
//#include <string>
//
//using namespace std;
//
//class bst
//{
//public:
//    char n[50] = {'\0', };
//    bst* right;
//    bst* left;
//    bst(char in[50])
//    {
//        strcpy(n, in);
//        right = NULL;
//        left = NULL;
//    }
//};
//
//class year
//{
//public:
//    int y;
//    year* next;
//    bst* b;
//
//    year(int in)
//    {
//        y = in;
//        next = NULL;
//        b = NULL;
//    }
//};
//
//class department
//{
//public:
//    char d[50] = {'\0', };
//    department* next;
//    year* y;
//    department(char in[50])
//    {
//        strcpy(d, in);
//        next = NULL;
//        y = NULL;
//    }
//};
//
//
//class manager
//{
//private:
//    department* head;
//public:
//    manager()
//    {
//        head = NULL;
//    }
//
//    void insert_d(char depart[50])
//    {
//        department* cur = head;
//
//        if(head == NULL)
//        {
//            department* add = new department(depart);
//
//            head = add;
//            cur = head;
//        }
//        else
//        {
//            department* add = new department(depart);
//
//            while (cur != NULL)
//            {
//                if (find_d(depart) != true)
//                {
//                    if (strcmp(add->d,cur->d) < 0)
//                    {
//                        add->next = cur->next;
//                        cur->next = add;
//                        cur = cur->next;
//                        break;
//                    }
//                    else
//                    {
//                        if (cur->next == NULL)
//                        {
//                            add->next = cur->next;
//                            cur->next = add;
//                            break;
//                        }
//                        cur = cur->next;
//                    }
//                }
//                else
//                {
//                    break;
//                }
//            }
//        }
//    }
//
//    void insert_y(char depart[50], int yy)
//    {
//        department* cur = head;
//        year* curr;
//        year* prev = NULL;
//
//        while(cur != NULL)
//        {
//            if(strcmp(depart, cur->d) == 0)
//            {
//                if(cur->y == NULL)
//                {
//                    year* add = new year(yy);
//                    cur->y = add;
//                    curr = cur->y;
//                    break;
//                }
//                else
//                {
//                    curr = cur->y;
//                    prev = NULL;
//                    while(curr != NULL)
//                    {
//                        if(curr->y > yy)
//                        {
//                            year* add = new year(yy);
//                            if (curr == cur->y)
//                            {
//                                add->next = curr;
//                                cur->y = add;
//                                break;
//                            }
//                            else
//                            {
//                                add->next = curr;
//                                prev->next = add;
//                                break;
//                            }
//                        }
//                        else
//                        {
//                            if (curr->y == yy)
//                            {
//                                break;
//                            }
//                            else
//                            {
//                                year* add = new year(yy);
//                                if(curr->next == NULL)
//                                {
//                                    add->next = curr->next;
//                                    curr->next = add;
//                                    break;
//                                }
//                                prev = curr;
//                                curr = curr->next;
//                            }
//                        }
//                    }
//                }
//                cur = cur->next;
//            }
//            else
//            {
//                cur = cur->next;
//            }
//        }
//    }
//
//    void insert_n(char depart[50], int yy, char name[50])
//    {
//        department* cur = head;
//        year* curr;
//        bst* currr;
//
//        while(cur != NULL)
//        {
//            if (strcmp(cur->d, depart) == 0)
//            {
//                curr = cur->y;
//                while (curr != NULL)
//                {
//                    if(curr->y == yy)
//                    {
//                        if(curr->b == NULL)
//                        {
//                            bst* add = new bst(name);
//                            curr->b = add;
//                            currr = curr->b;
//                            return;
//                            break;
//                        }
//                        else
//                        {
//                            currr = curr->b;
//                            while(currr != NULL)
//                            {
//                                if( strcmp(currr->n, name) < 0)
//                                {
//                                    if(currr->right == NULL)
//                                    {
//                                        bst* add = new bst(name);
//                                        currr->right = add;
//                                        return;
//                                        break;
//                                    }
//                                    else
//                                    {
//                                        currr = currr->right;
//                                    }
//                                }
//                                else if(strcmp(currr->n, name) > 0)
//                                {
//                                    if(currr->left == NULL)
//                                    {
//                                        bst* add = new bst(name);
//                                        currr->left = add;
//                                        return;
//                                        break;
//                                    }
//                                    else
//                                    {
//
//                                        currr = currr->left;
//                                    }
//                                }
//                                else if(strcmp(currr->n, name) == 0)
//                                {
//                                    return;
//                                    break;
//                                }
//                            }
//                        }
//                    }
//                    else
//                    {
//                        curr = curr->next;
//                    }
//                }
//            }
//            else
//            {
//                cur = cur->next;
//            }
//        }
//    }
//
//    void command_insert(char depart[50], int yy, char name[50])
//    {
//        department* cur = head;
//        year* curr;
//        bst* currr;
//
//        while(cur != NULL)
//        {
//            if (strcmp(cur->d, depart) == 0)
//            {
//                cout << cur->d << "->";
//                curr = cur->y;
//                while (curr != NULL)
//                {
//                    if(curr->y == yy)
//                    {
//                        cout << curr->y << "->";
//                        if(curr->b == NULL)
//                        {
//                            bst* add = new bst(name);
//                            curr->b = add;
//                            currr = curr->b;
//                            cout << currr->n;
//                            return;
//                            break;
//                        }
//                        else
//                        {
//                            currr = curr->b;
//                            while(currr != NULL)
//                            {
//                                if( strcmp(currr->n, name) < 0)
//                                {
//                                    if(currr->right == NULL)
//                                    {
//                                        bst* add = new bst(name);
//                                        cout << currr->n << "->";
//                                        currr->right = add;
//                                        currr = currr->right;
//                                        cout << currr->n ;
//
//                                        return;
//                                        break;
//                                    }
//                                    else
//                                    {
//                                        cout << currr->n << "->";
//                                        currr = currr->right;
//                                    }
//                                }
//                                else if(strcmp(currr->n, name) > 0)
//                                {
//                                    if(currr->left == NULL)
//                                    {
//                                        bst* add = new bst(name);
//                                        cout << currr->n << "->";
//                                        currr->left = add;
//                                        currr = currr->left;
//                                        cout << currr->n;
//                                        return;
//                                        break;
//                                    }
//                                    else
//                                    {
//                                        cout << currr->n << "->";
//                                        currr = currr->left;
//                                    }
//                                }
//                                else if(strcmp(currr->n, name) == 0)
//                                {
//                                    return;
//                                    break;
//                                }
//                            }
//                        }
//                    }
//                    else
//                    {
//                        cout << curr->y << "->";
//                        curr = curr->next;
//                    }
//                }
//            }
//            else
//            {
//                cout << cur->d << "->";
//                cur = cur->next;
//            }
//        }
//    }
//
//    bst* getmin(bst* target)
//    {
//        if (target == NULL)
//            return NULL;
//
//        if (target->left == NULL)
//            return target;
//        else
//            return getmin(target->left);
//    }
//
//    bst* getmin_par(bst* node)
//    {
//       bst* curr = node;
//       bst* par = NULL;
//
//       while (curr && curr->left != NULL)
//       {
//          par = curr;
//          curr = curr->left;
//       }
//
//       return par;
//    }
//
//
//
//    bst* BST_RemoveNode(year* y, bst* tree, bst* par, char name[50])
//    {
//        static int cnt = 0;
//        if(tree == NULL)
//        {
//            return NULL;
//        }
//
//        bst* par_node = par;
//
//        if(strcmp(tree->n,name) > 0)
//        {
//            par_node = tree;
//            cnt = 1;
//            tree = BST_RemoveNode(y, tree->left, par_node, name);
//        }
//        else if(strcmp(tree->n,name) < 0)
//        {
//            par_node = tree;
//            cnt = 2;
//            tree = BST_RemoveNode(y, tree->right, par_node, name);
//        }
//        else if(strcmp(tree->n,name) == 0)
//        {
//            if(par_node == NULL)
//            {
//                if(tree->left == NULL && tree->right == NULL)
//                {
//                    y->b = tree->left;
//                    cout << "Delete_Name : " << tree->n << '\n';
//                    delete tree;
//                    return tree;
//                }
//                else if(tree->left == NULL && tree->right != NULL)
//                {
//                    y->b = tree->right;
//                    cout << "Delete_Name : " << tree->n << '\n';
//                    delete tree;
//                    return tree;
//
//                }
//                else if(tree->left != NULL && tree->right == NULL)
//                {
//                    y->b = tree->left;
//                    cout << "Delete_Name : " << tree->n << '\n';
//                    delete tree;
//                    return tree;
//                }
//                else if(tree->left != NULL && tree->right != NULL)
//                {
//                    bst* temp = getmin(tree->right);
//                    strcpy(tree->n, temp->n);
//                    tree = BST_RemoveNode(y, tree, par_node, temp->n);
//                    return tree;
//                }
//            }
//            else
//            {
//                if(tree->left == NULL && tree->right == NULL)
//                {
//                    if(cnt == 1)
//                    {
//                        par_node->left = tree->right;
//                    }
//                    else if(cnt == 2)
//                    {
//                        par_node->right = tree->right;
//                    }
//                    cout << "Delete_Name : " << tree->n << '\n';
//                    delete tree;
//                    return tree;
//                }
//                else if(tree->left == NULL && tree->right != NULL)
//                {
//                    if(cnt == 1)
//                    {
//                        par_node->left = tree->right;
//                    }
//                    else if(cnt == 2)
//                    {
//                        par_node->right = tree->right;
//                    }
//                    cout << "Delete_Name : " << tree->n << '\n';
//                    delete tree;
//                    return tree;
//
//                }
//                else if(tree->left != NULL && tree->right == NULL)
//                {
//                    if(cnt == 1)
//                    {
//                        par_node->left = tree->left;
//                    }
//                    else if(cnt == 2)
//                    {
//                        par_node->right = tree->left;
//                    }
//                    cout << "Delete_Name : " << tree->n << '\n';
//                    delete tree;
//                    return tree;
//                }
//                else if(tree->left != NULL && tree->right != NULL)
//                {
//                    bst* temp = getmin(tree->right);
//                    strcpy(tree->n, temp->n);
//                    tree = BST_RemoveNode(y, tree, par_node, temp->n);
//                    return tree;
//                }
//            }
//
//        }
//
//        return tree;
//    }
//
//
//    void find_delete(char depart[50], int yy, char name[50])
//    {
//        department* cur = head;
//        department* cur_par = NULL;
//        year* curr_par = NULL;
//        year* curr;
//        bst* currr;
//
//
//        while(cur != NULL)
//        {
//            if (strcmp(cur->d, depart) == 0)
//            {
//                curr = cur->y;
//                while (curr != NULL)
//                {
//                    if(curr->y == yy)
//                    {
//                        currr = curr->b;
//                        BST_RemoveNode(curr, currr, NULL, name);
//                        break;
//                    }
//                    else
//                    {
//                        curr_par = curr;
//                        curr = curr->next;
//                    }
//                }
//                if(curr != cur->y)
//                {
//                    if (curr->b == NULL)
//                    {
//                        cout << "Delete_Year : " << curr->y << '\n';
//                        curr_par->next = curr->next;
//                        delete curr;
//                        break;
//                    }
//                    else
//                    {
//                        return;
//                    }
//                }
//                else
//                {
//                    if (curr->b == NULL)
//                    {
//                        cout << "Delete_Year : " << curr->y << '\n';
//                        cur->y = curr->next;
//                        delete curr;
//                        break;
//                    }
//                    else
//                    {
//                        return;
//                    }
//                }
//            }
//            else
//            {
//                cur_par = cur;
//                cur = cur->next;
//            }
//        }
//        if(cur != head)
//        {
//            if (cur->y == NULL)
//            {
//                cout << "Delete_Major : " << cur->d << '\n';
//                cur_par->next = cur->next;
//                delete cur;
//                return;
//            }
//            else
//            {
//                return;
//            }
//        }
//        else
//        {
//            if (cur->y == NULL)
//            {
//                cout << "Delete_Major : " << cur->d << '\n';
//                head->next = cur->next;
//                delete cur;
//                return;
//            }
//            else
//            {
//                return;
//            }
//        }
//    }
//
//    bool find_d(char depart[50])
//    {
//        department* cur = head;
//        while (cur != NULL)
//        {
//            if (strcmp(cur->d, depart) == 0)
//            {
//                return true;
//            }
//            cur = cur->next;
//        }
//        return false;
//    }
//
//    void print_all()
//    {
//        department* cur_d = head;
//
//        char major[50] = {'\0', };
//        int yy;
//
//        while (cur_d != NULL)
//        {
//            strcpy(major, cur_d->d);
//
//            if(cur_d->y != NULL)
//            {
//                year* cur_y = cur_d->y;
//                while(cur_y != NULL)
//                {
//                    yy = cur_y->y;
//
//                    bst* cur_b = cur_y->b;
//
//                    postorder(cur_b, major, yy);
//                    cur_y = cur_y->next;
//                }
//                cur_d = cur_d->next;
//            }
//        }
//        return;
//    }
//
//    void print_major(char in[50])
//    {
//        department* cur = head;
//
//        char major[50] = {'\0', };
//        int yy;
//
//        while (cur != NULL)
//        {
//            if(strcmp(cur->d, in) == 0)
//            {
//                strcpy(major, cur->d);
//
//                if(cur->y != NULL)
//                {
//                    year* cur_y = cur->y;
//                    while(cur_y != NULL)
//                    {
//                        yy = cur_y->y;
//
//                        bst* cur_b = cur_y->b;
//
//                        postorder(cur_b, major, yy);
//                        cur_y = cur_y->next;
//                    }
//                    cur = cur->next;
//                }
//            }
//            else
//            {
//                cur = cur->next;
//            }
//
//        }
//        return;
//    }
//
//    void print_year(char in[50], int y_in)
//    {
//        department* cur = head;
//
//        char major[50] = {'\0', };
//        int yy;
//
//        while (cur != NULL)
//        {
//            if(strcmp(cur->d, in) == 0)
//            {
//                strcpy(major, cur->d);
//
//                if(cur->y != NULL)
//                {
//                    year* cur_y = cur->y;
//                    while(cur_y != NULL)
//                    {
//                        if (cur_y->y == y_in)
//                        {
//                            yy = cur_y->y;
//
//                            bst* cur_b = cur_y->b;
//
//                            postorder(cur_b, major, yy);
//                            return;
//                            cur_y = cur_y->next;
//                        }
//                        else
//                        {
//                            cur_y = cur_y->next;
//                        }
//                    }
//                    cur = cur->next;
//                }
//            }
//            else
//            {
//                cur = cur->next;
//            }
//
//        }
//        return;
//    }
//
//    void print_name(char in_major[50], int y_in, char in_name[50])
//    {
//        department* cur = head;
//        year* curr;
//        bst* currr;
//
//        while(cur != NULL)
//        {
//            if (strcmp(cur->d, in_major) == 0)
//            {
//                cout << cur->d << "->";
//                curr = cur->y;
//                while (curr != NULL)
//                {
//                    if(curr->y == y_in)
//                    {
//                        cout << curr->y << "->";
//                        currr = curr->b;
//                        while(currr != NULL)
//                        {
//                            if( strcmp(currr->n, in_name) > 0)
//                            {
//                                cout << currr->n << "->";
//                                currr = currr->right;
//                            }
//                            else if(strcmp(currr->n, in_name) < 0)
//                            {
//                                cout << currr->n << "->";
//                                currr = currr->left;
//                            }
//                            else if(strcmp(currr->n, in_name) == 0)
//                            {
//                                cout << currr->n;
//                                return;
//                                break;
//                            }
//                        }
//                    }
//                    else
//                    {
//                        cout << curr->y << "->";
//                        curr = curr->next;
//                    }
//                }
//            }
//            else
//            {
//                cout << cur->d << "->";
//                cur = cur->next;
//            }
//        }
//        return;
//    }
//
//    void postorder(bst* pointer, char major[50], int year)
//    {
//        if(pointer != NULL)
//        {
//            postorder(pointer->left, major, year);
//            postorder(pointer->right, major, year);
//            cout << major << " " << year << " " << pointer->n << "\n";
//        }
//        return;
//    }
//};
//int main(void)
//{
//
//    fstream f1;
//    f1.open("Assignment3-3-4.txt", ios::in);
//
//    manager m;
//
//    while (!f1.eof())
//    {
//        char major[50] = {'\0', };
//        int year;
//        char name[50] = {'\0', };
//
//        f1 >> major;
//        f1 >> year;
//        f1 >> name;
//
//        m.insert_d(major);
//        m.insert_y(major, year);
//        m.insert_n(major, year, name);
//
//    }
//
//    f1.close();
//
//    int command = 0;
//
//    do
//    {
//        cout << "Enter Any Command (1: Insert, 2: Delete, 3: Print_all, 4: Print_major, 5: Print_year, 6: Print_name, 7: Exit) : ";
//        cin >> command;
//
//        if(command == 1)
//        {
//            char major[50] = {'\0', };
//            int year;
//            char name[50] = {'\0', };
//
//            cin >> major >> year >> name;
//
//            m.insert_d(major);
//            m.insert_y(major, year);
//            m.command_insert(major, year, name);
//            cout << "\n";
//        }
//        else if(command == 2)
//        {
//            char major[50] = {'\0', };
//            int year;
//            char name[50] = {'\0', };
//
//            cin >> major >> year >> name;
//
//            m.find_delete(major, year, name);
//        }
//        else if(command == 3)
//        {
//            m.print_all();
//        }
//        else if(command == 4)
//        {
//            char major[50] = {'\0', };
//
//            cin >> major;
//            m.print_major(major);
//        }
//        else if(command == 5)
//        {
//            char major[50] = {'\0', };
//            int year;
//
//            cin >> major >> year;
//
//            m.print_year(major, year);
//        }
//        else if(command == 6)
//        {
//            char major[50] = {'\0', };
//            int year;
//            char name[50] = {'\0', };
//
//            cin >> major >> year >> name;
//
//            m.print_name(major, year, name);
//            cout << '\n';
//        }
//
//    }
//    while(command != 7);
//
//    return 0;
//}
//


//
//#pragma warning(disable:4996)
//#include <iostream>
//#include <string>
//#include <fstream>
//using namespace std;
//
//class Node {
//public:
//   string data = "\0";
//   Node* next;
//   Node* prev;
//};
//
//class CircleList {
//private:
//   Node* head;
//   Node* tail;
//public:
//   CircleList() {
//      head = NULL;
//      tail = NULL;
//   }
//   void insert(string station) {
//      Node* cur = head;
//      Node* add = new Node;
//      add->data = station;
//      if (head == NULL)
//      {
//         head = add;
//         tail = head;
//      }
//      else
//      {
//         add->prev = tail;
//         add->next = head;
//         head->prev = add;
//         tail->next = add;
//         tail = add;
//      }
//
//
//   }
//   Node* find_cityhall() {
//      Node* curr = head;
//      while (curr != NULL) {
//         if (curr->data == "시청") {
//            return curr;
//         }
//         else {
//            curr = curr->next;
//         }
//      }
//      return NULL;
//
//   }
//   Node* find(string station) {
//      Node* curr = head;
//      while (curr != NULL) {
//         if (curr->data == station) {
//            return curr;
//         }
//         else {
//            curr = curr->next;
//         }
//      }
//      return NULL;
//
//   }
//   Node* find3(Node* ptr, string end) {
//      Node* curr = ptr;
//      while (1) {
//         curr = curr->next;
//         if (curr->data == end) {
//            return curr;
//            break;
//         }
//         else if (curr->data == ptr->data) {
//            return NULL;
//            break;
//         }
//      }
//
//   }
//   void find2(Node* ptr, string end) {
//      Node* curr = ptr;
//      int count1 = 0;
//      int count2 = 0;
//      while (curr->data != end) {
//
//         if (curr->data == end) {
//            break;
//         }
//         curr = curr->prev;
//         count1++;
//      }
//
//
//      curr = ptr;
//
//      while (curr->data != end) {
//         if (curr->data == end) {
//            break;
//         }
//         curr = curr->next;
//         count2++;
//      }
//
//      curr = ptr;
//
//      if (count1 < count2) {
//         while (curr->prev->data != end) {
//            cout << curr->prev->data << "->";
//            curr = curr->prev;
//         }
//         cout << curr->prev->data << endl;
//         return;
//      }
//      else {
//         while (curr->next->data != end) {
//            cout << curr->data << "->";
//            curr = curr->next;
//         }
//         cout << curr->next->data << endl;
//         return;
//      }
//
//   }
//
//};
//
//
//class DoubleList {
//   private:
//      Node* head;
//      Node* tail;
//   public:
//      DoubleList() {
//         head = NULL;
//         tail = NULL;
//      }
//      void insert(string station) {
//         Node* cur = head;
//         Node* add = new Node;
//         add->data = station;
//
//         if (head == NULL) {
//            head = add;
//            tail = head;
//         }
//         else {
//            add->prev = tail;
//            add->next = tail->next;
//            tail->next = add;
//            tail = add;
//         }
//      }
//
//      Node* find(string station) { //역이 있는wl 찾기
//         Node* curr = head;
//         while (curr != NULL) {
//            if (curr->data == station) {
//               return curr;
//            }
//            else {
//            curr = curr->next;
//            }
//         }
//         return NULL;
//
//      }
//      Node* find2(Node* ptr, string end) { //도착역이 있는지 찾기
//         Node* curr = ptr;
//         while (curr != head) {
//            if (curr->data == end) {
//               return curr;
//            }
//            curr = curr->prev;
//         }
//
//         curr = ptr;
//         while (curr != tail) {
//            if (curr->data == end) {
//               return curr;
//            }
//            curr = curr->next;
//         }
//         return NULL;
//      }
//
//      Node* find_cityhall() {
//         Node* curr = head;
//         while (curr != NULL) {
//            if (curr->data == "시청") {
//               return curr;
//            }
//            else {
//               curr = curr->next;
//            }
//         }
//         return NULL;
//
//      }
//      void print(Node* ptr, string end) {
//         Node* curr = ptr;
//         int i = 0;
//         while (curr != NULL)
//         {
//            if (curr->data == end)
//            {
//               i = 1;
//            }
//            curr = curr->next;
//         }
//
//         curr = ptr;
//
//         if (i == 0)
//         {
//            while (curr->prev->data != end)
//            {
//               cout << curr->data << "->";
//               curr = curr->prev;
//            }
//            cout << curr->data;
//            return;
//         }
//         else
//         {
//            while (curr->next->data != end)
//            {
//               cout << curr->data << "->";
//               curr = curr->next;
//            }
//            cout << curr->data;
//            return;
//
//         }
//
//      }
//
//
//
//
//};
//
//
//int main() {
//  DoubleList list;
//  CircleList list2;
//  string start_station;
//  string end_station;
//  fstream f1;
//  f1.open("Assignment3-3-2-1.txt", ios::in);
//  fstream f2;
//  f2.open("Assignment3-3-2-2.txt", ios::in);
//  while (!f1.eof()) {
//
//     string subway1;
//     getline(f1, subway1);
//     list.insert(subway1);
//
//  }
//
//  while (!f2.eof()) {
//
//     string subway2;
//     getline(f2, subway2);
//     list2.insert(subway2);
//
//
//  }
//  cout << "출발역 :";
//  cin >> start_station;
//  cout << "도착역 :";
//  cin >> end_station;
//  Node* ptr = list.find(start_station);
//
//  if (ptr!=NULL) {
//     if (list.find2(ptr, end_station) != NULL) {//1-1
//        list.print(ptr, end_station);
//     }
//     else if (list.find2(ptr, end_station) == NULL) {//1-2
//        Node* ptr2 = list2.find_cityhall();
//        list.print(ptr, "시청");
//        cout << "->";
//        list2.find2(ptr2, end_station);
//     }
//  }
//  else if (ptr == NULL) {
//  Node* ptr3 = list2.find(start_station);
//     if (list2.find3(ptr3, end_station) != NULL) { //2-2
//        list2.find2(ptr3, end_station);
//     }
//     else if((list2.find3(ptr3, end_station)==NULL)) {//2-1
//        Node* ptr4 = list.find_cityhall();
//        list2.find2(ptr3, "시청");
//        cout << "->";
//        list.print(ptr4, end_station);
//     }
//  }
//  f1.close();
//  f2.close();
//}
//
//

// ========================================
// 프로젝트

#pragma warning(disable:4996)
#include <iostream>
#include <fstream>

using namespace std;

class bst
{
public:
    char n[50] = {'\0', };
    bst* right;
    bst* left;
    bst(char in[50])
    {
        strcpy(n, in);
        right = NULL;
        left = NULL;
    }
};

class node
{
public:
    node* left;
    node* right;
    node* up;
    node* down;
    node* front;
    node* behind;

    bst* word;

    int z;
    int y;
    int x;
    
    int count;
    node(int zz, int yy, int xx)
    {
        left = NULL;
        right = NULL;
        up = NULL;
        down = NULL;
        front = NULL;
        behind = NULL;

        word = NULL;
        
        x = xx;
        y = yy;
        z = zz;
        
        count = 0;
    }
    node(node& n)
    {
        this->left = n.left;
        this->right = n.right;
        this->up = n.up;
        this->down = n.down;
        this->front = n.front;
        this->behind = n.behind;
        
        this->x = n.x;
        this->y = n.y;
        this->z = n.z;
        
        this->word = n.word;
        
    }
};


class cube_1
{
private:
    node* head;
public:
    cube_1()
    {
        head = NULL;
    }
    void insert(int z, int y)
    {
        node* cur = head;
        for (int x = 0; x < 3; x++)
        {
            node* add = new node(z,y,x);

            if(x == 0)
            {
                head = add;
                cur = add;
            }
            else
            {
                add->left = cur;
                cur->right = add;
                cur = cur->right;
            }
        }
    }

    node* return_head()
    {
        return head;
    }

    void print()
    {
        node* cur = head;
        while(cur != NULL)
        {
            cout << cur->z << " " << cur->y << " " << cur->x << " ";
            cur = cur->right;
        }
    }

};

class cube_2
{
private:
    node* head;
public:
    cube_1 a;
    cube_1 b;
    cube_1 c;

    void insert_2(int z)
    {

        a.insert(z, 0);
        b.insert(z, 1);
        c.insert(z, 2);
        head = a.return_head();
        node* cur1 = a.return_head();
        node* cur2 = b.return_head();
        cur1->front = cur2;
        cur2->behind = cur1;
        cur1 = cur1->right;
        cur2 = cur2->right;
        cur1->front = cur2;
        cur2->behind = cur1;
        cur1 = cur1->right;
        cur2 = cur2->right;
        cur1->front = cur2;
        cur2->behind = cur1;

        cur2 = b.return_head();
        node* cur3 = c.return_head();
        cur2->front = cur3;
        cur3->behind = cur2;
        cur2 = cur2->right;
        cur3 = cur3->right;
        cur2->front = cur3;
        cur3->behind = cur2;
        cur2 = cur2->right;
        cur3 = cur3->right;
        cur2->front = cur3;
        cur3->behind = cur2;
    }

    node* return_head()
    {
        return head;
    }
};

class cube_3
{
private:
    node* head;
public:
    cube_2 a;
    cube_2 b;
    cube_2 c;

    void insert3()
    {
        a.insert_2(0);
        b.insert_2(1);
        c.insert_2(2);
        head = a.return_head();
        node* cur1 = a.return_head();
        node* cur2 = b.return_head();

        for (int i = 0; i < 9; i++)
        {
            cur1->down = cur2;
            cur2->up = cur1;

            if (i % 3 == 2)
            {
                cur1 = cur1->left->left->front;
                cur2 = cur2->left->left->front;
            }
            else
            {
                cur1 = cur1->right;
                cur2 = cur2->right;
            }
        }

        cur2 = b.return_head();
        node* cur3 = c.return_head();

        for (int i = 0; i < 9; i++)
        {
            cur2->down = cur3;
            cur3->up = cur2;

            if (i % 3 == 2)
            {
                cur2 = cur2->left->left->front;
                cur3 = cur3->left->left->front;
            }
            else
            {
                cur2 = cur2->right;
                cur3 = cur3->right;
            }
        }
    }

    void print_all()
    {
        node* cur = head;

        for (int j = 0; j < 3; j++)
        {
            for(int i = 0; i < 8; i++)
            {
                cout << cur->count << " " ;
                if (i % 3 == 2)
                {
                    cur = cur->left->left->down;
                    cout << "\n";
                }
                else
                {
                    cur = cur->right;
                }
            }
            cout << cur->count << "\n\n" ;
            if (j == 0)
            {
                cur = head->front;
            }
            else if(j == 1)
            {
                cur = head->front->front;
            }
        }
    }

    void insert(int z_in, int y_in, int x_in, char name[50])
    {
        node* cur = head;
        bst* tree ;
        while(cur != NULL)
        {
            if(z_in > cur->z)
            {
                cur = cur->down;
            }
            else if (z_in < cur->z)
            {
                cur = cur->up;
            }
            else
            {
                if(y_in > cur->y)
                {
                    cur = cur->front;
                }
                else if (y_in < cur->y)
                {
                    cur = cur->behind;
                }
                else
                {
                    if(x_in > cur->x)
                    {
                        cur = cur->right;
                    }
                    else if (x_in < cur->x)
                    {
                        cur = cur->left;
                    }
                    else
                    {
                        if(cur->word == NULL)
                        {
                            bst* add = new bst(name);
                            cur->word = add;
                            cur->count += 1;
                            return;
                            break;
                        }
                        else
                        {
                            tree = cur->word;
                            while( tree != NULL)
                            {
                                if( strcmp(tree->n, name) < 0)
                                {
                                    if(tree->right == NULL)
                                    {
                                        bst* add = new bst(name);
                                        tree->right = add;
                                        cur->count += 1;
                                        return;
                                        break;
                                    }
                                    else
                                    {
                                        tree = tree->right;
                                    }
                                }
                                else if(strcmp(tree->n, name) > 0)
                                {
                                    if(tree->left == NULL)
                                    {
                                        bst* add = new bst(name);
                                        tree->left = add;
                                        cur->count += 1;
                                        return;
                                        break;
                                    }
                                    else
                                    {
                                        tree = tree->left;
                                    }
                                }
                                else if(strcmp(tree->n, name) == 0)
                                {
                                    return;
                                    break;
                                }
                            }
                        }

                    }
                }
            }
        }
    }
    
    void print(int z_in, int y_in, int x_in)
    {
        bst* tree = find_node(z_in, y_in, x_in)->word;
        
        cout << "preorder : ";
        preorder(tree);
        cout << '\n';
        cout << "postorder : ";
        postorder(tree);
        cout << '\n';
        cout << "inorder : ";
        inorder(tree);
        cout << '\n';
        return;
    }
    
    void find(char name[50])
    {
        node* cur = head;
        
        for (int j = 0; j < 3; j++)
        {
            for(int i = 0; i < 8; i++)
            {
                if (find_name(cur->word, name) != NULL)
                {
                    cout << cur->z << cur->y << cur->x <<'\n';
                }
                if (i % 3 == 2)
                {
                    cur = cur->left->left->down;
                }
                else
                {
                    cur = cur->right;
                }
            }
            if (j == 0)
            {
                cur = head->front;
            }
            else if(j == 1)
            {
                cur = head->front->front;
            }
        }
    }

    void postorder(bst* pointer)
    {
        if(pointer != NULL)
        {
            postorder(pointer->left);
            postorder(pointer->right);
            cout << pointer->n << " ";
        }
        return;
    }
    
    bst* find_name(bst* pointer, char name[50])
    {
        while(pointer != NULL)
        {
            if(strcmp(pointer->n, name) < 0)
            {
                pointer = pointer->right;
            }
            else if(strcmp(pointer->n, name) > 0)
            {
                pointer = pointer->left;
            }
            else if(strcmp(pointer->n, name) == 0)
            {
                return pointer;
            }
        }
        return pointer;
    }
    
    void inorder(bst* pointer)
    {
        if(pointer != NULL)
        {
            inorder(pointer->left);
            cout << pointer->n << " ";
            inorder(pointer->right);
        }
        return;
    }
    
    void preorder(bst* pointer)
    {
        if(pointer != NULL)
        {
            cout << pointer->n << " ";
            preorder(pointer->left);
            preorder(pointer->right);
        }
        return;
    }
    node* return_head()
    {
        return head;
    }
    
    bst* getmin(bst* target)
    {
        if (target == NULL)
            return NULL;

        if (target->left == NULL)
            return target;
        else
            return getmin(target->left);
    }
    
    bst* BST_RemoveNode(node* N, bst* tree, bst* par, char name[50])
    {
        static int cnt = 0;
        if(tree == NULL)
        {
            return NULL;
        }

        bst* par_node = par;

        if(strcmp(tree->n,name) > 0)
        {
            par_node = tree;
            cnt = 1;
            tree = BST_RemoveNode(N, tree->left, par_node, name);
        }
        else if(strcmp(tree->n,name) < 0)
        {
            par_node = tree;
            cnt = 2;
            tree = BST_RemoveNode(N, tree->right, par_node, name);
        }
        else if(strcmp(tree->n,name) == 0)
        {
            if(par_node == NULL)
            {
                if(tree->left == NULL && tree->right == NULL)
                {
                    N->word = tree->left;
                    delete tree;
                    return tree;
                }
                else if(tree->left == NULL && tree->right != NULL)
                {
                    N->word = tree->right;
                    delete tree;
                    return tree;

                }
                else if(tree->left != NULL && tree->right == NULL)
                {
                    N->word = tree->left;
                    delete tree;
                    return tree;
                }
                else if(tree->left != NULL && tree->right != NULL)
                {
                    bst* temp = getmin(tree->right);
                    strcpy(tree->n, temp->n);
                    tree = BST_RemoveNode(N, tree, par_node, temp->n);
                    return tree;
                }
            }
            else
            {
                if(tree->left == NULL && tree->right == NULL)
                {
                    if(cnt == 1)
                    {
                        par_node->left = tree->right;
                    }
                    else if(cnt == 2)
                    {
                        par_node->right = tree->right;
                    }
                    delete tree;
                    return tree;
                }
                else if(tree->left == NULL && tree->right != NULL)
                {
                    if(cnt == 1)
                    {
                        par_node->left = tree->right;
                    }
                    else if(cnt == 2)
                    {
                        par_node->right = tree->right;
                    }
                    delete tree;
                    return tree;

                }
                else if(tree->left != NULL && tree->right == NULL)
                {
                    if(cnt == 1)
                    {
                        par_node->left = tree->left;
                    }
                    else if(cnt == 2)
                    {
                        par_node->right = tree->left;
                    }
        
                    delete tree;
                    return tree;
                }
                else if(tree->left != NULL && tree->right != NULL)
                {
                    bst* temp = getmin(tree->right);
                    strcpy(tree->n, temp->n);
                    return tree;
                }
            }

        }

        return tree;
    }
    
    void Delete(int z_in, int y_in, int x_in, char name[50])
    {
        node* cur = head;
        while(cur != NULL)
        {
            if(z_in > cur->z)
            {
                cur = cur->down;
            }
            else if (z_in < cur->z)
            {
                cur = cur->up;
            }
            else
            {
                if(y_in > cur->y)
                {
                    cur = cur->front;
                }
                else if (y_in < cur->y)
                {
                    cur = cur->behind;
                }
                else
                {
                    if(x_in > cur->x)
                    {
                        cur = cur->right;
                    }
                    else if (x_in < cur->x)
                    {
                        cur = cur->left;
                    }
                    else
                    {
                        if(find_name(cur->word, name) != NULL)
                        {
                            BST_RemoveNode(cur, cur->word, NULL, name);
                            return;
                            break;
                        }
                        else
                        {
                            return;
                            break;
                        }

                    }
                }
            }
        }
    }
    
    node* find_node(int z_in, int y_in, int x_in)
    {
        node* cur = head;

        while (cur != NULL)
        {
            if(z_in > cur->z)
            {
                cur = cur->down;
            }
            else if (z_in < cur->z)
            {
                cur = cur->up;
            }
            else
            {
                if(y_in > cur->y)
                {
                    cur = cur->front;
                }
                else if (y_in < cur->y)
                {
                    cur = cur->behind;
                }
                else
                {
                    if(x_in > cur->x)
                    {
                        cur = cur->right;
                    }
                    else if (x_in < cur->x)
                    {
                        cur = cur->left;
                    }
                    else
                    {
                        return cur;
                    }
                }
            }
        }
        return NULL;
    }
    
    void Exchange(int z1, int y1, int x1, int z2, int y2, int x2)
    {
        node* ch1 = find_node(z1,y1,x1);
        node* ch2 = find_node(z2,y2,x2);

        node* change_node = new node(z2,y2,x2);
        change_node->word = ch2->word;
        change_node->count = ch2->count;

        if(z1 == 0 && y1 == 0 && x1 == 0)
        {
            head = change_node;
        }
        else if(z2 == 0 && y2 == 0 && x2 == 0)
        {
            head = ch1;
        }

        if(ch1->right != NULL)
        {
            ch1->right->left = change_node;
        }
        if(ch1->left != NULL)
        {
            ch1->left->right = change_node;
        }
        if(ch1->up != NULL)
        {
            ch1->up->down = change_node;
        }
        if(ch1->down != NULL)
        {
            ch1->down->up = change_node;
        }
        if(ch1->behind != NULL)
        {
            ch1->behind->front = change_node;
        }
        if(ch1->front != NULL)
        {
            ch1->front->behind = change_node;
        }

        //=======================================================================

        if(ch2->right != NULL)
        {
            ch2->right->left = ch1;
        }
        if(ch2->left != NULL)
        {
            ch2->left->right = ch1;
        }
        if(ch2->up != NULL)
        {
            ch2->up->down = ch1;
        }
        if(ch2->down != NULL)
        {
            ch2->down->up = ch1;
        }
        if(ch2->behind != NULL)
        {
            ch2->behind->front = ch1;
        }
        if(ch2->front != NULL)
        {
            ch2->front->behind = ch1;
        }
        //=======================================================================
//        if(ch1->right != NULL)
//        {
//            change_node->right = ch1->right;
//        }
//        if(ch1->left != NULL)
//        {
//            change_node->left = ch1->left;
//        }
//        if(ch1->up != NULL)
//        {
//            change_node->up = ch1->up;
//        }
//        if(ch1->down != NULL)
//        {
//            change_node->down = ch1->down;
//        }
//        if(ch1->behind != NULL)
//        {
//            change_node->behind = ch1->behind;
//        }
//        if(ch1->front != NULL)
//        {
//            change_node->front = ch1->front;
//        }
        
        change_node->right = ch1->right;
        change_node->left = ch1->left;
        change_node->up = ch1->up;
        change_node->down = ch1->down;
        change_node->behind = ch1->behind;
        change_node->front = ch1->front;
        
        //=======================================================================
//        if(ch2->right != NULL)
//        {
//            ch1->right = ch2->right;
//        }
//        if(ch2->left != NULL)
//        {
//            ch1->left = ch2->left;
//        }
//        if(ch2->up != NULL)
//        {
//            ch1->up = ch2->up;
//        }
//        if(ch2->down != NULL)
//        {
//            ch1->down = ch2->down;
//        }
//        if(ch2->behind != NULL)
//        {
//            ch1->behind = ch2->behind;
//        }
//        if(ch2->front != NULL)
//        {
//            ch1->front = ch2->front;
//        }
        ch1->right = ch2->right;
        ch1->left = ch2->left;
        ch1->up = ch2->up;
        ch1->down = ch2->down;
        ch1->behind = ch2->behind;
        ch1->front = ch2->front;

        change_node->z = ch1->z; change_node->y = ch1->y; change_node->x = ch1->x;
        ch1->z = ch2->z; ch1->y = ch2->y; ch1->x = ch2->x;

        delete ch2;

        return;
    }
////
//    void Exchange(int z1,int y1, int x1, int z2, int y2, int x2)
//    {
//       node* cur1 = find_node(z1, y1, x1);
//       node* cur2 = find_node(z2, y2, x2);
//
//       cout << cur1->z << cur1->y << cur1->x;
//       cout << cur2->z << cur2->y << cur2->x;
//
//        int temp_z = cur1->z;
//        int temp_y = cur1->y;
//        int temp_x = cur1->x;
//
//        if(z1 == 0 && y1 == 0 && x1 == 0)
//        {
//            head = cur2;
//        }
//        else if(z2 == 0 && y2 == 0 && x2 == 0)
//        {
//            head = cur2;
//        }
//
//       node** temp_right1 = &(cur1->right);
//       node** temp_left1 = &(cur1->left);
//       node** temp_up1= &(cur1->up);
//       node** temp_down1 = &(cur1->down);
//       node** temp_front1 = &(cur1->front);
//       node** temp_behind1 = &(cur1->behind);
//
//       node** temp_right2 = &(cur2->right);
//       node** temp_left2 = &(cur2->left);
//       node** temp_up2 = &(cur2->up);
//       node** temp_down2 = &(cur2->down);
//       node** temp_front2 = &(cur2->front);
//       node** temp_behind2  = &(cur2->behind); //자기가 가리키는 화살표 복사하기
//
//        if (cur1->right) {
//            node** temp_right1_l = &(cur1->right->left);
//            *temp_right1_l = cur2;
//        }
//        if (cur1->left) {
//            node** temp_left1_r = &(cur1->left->right);
//            *temp_left1_r = cur2;
//        }
//        if (cur1->up) {
//            node** temp_up1_d = &(cur1->up->down);
//            *temp_up1_d = cur2;
//        }
//        if (cur1->down) {
//            node** temp_down1_u = &(cur1->down->up);
//            *temp_down1_u = cur2;
//        }
//        if (cur1->front) {
//            node** temp_front1_b = &(cur1->front->behind);
//            *temp_front1_b = cur2;
//        }
//        if (cur1->behind) {
//            node** temp_behind1_f = &(cur1->behind->front);
//            *temp_behind1_f = cur2;
//        }
//        //....
//        if (cur2->right) {
//            node** temp_right2_l = &(cur2->right->left);
//            *temp_right2_l = cur1;
//        }
//        if (cur2->left) {
//            node** temp_left2_r = &(cur2->left->right);
//            *temp_left2_r = cur1;
//        }
//        if (cur2->up) {
//            node** temp_up2_d = &(cur2->up->down);
//            *temp_up2_d = cur1;
//        }
//        if (cur2->down) {
//            node** temp_down2_u = &(cur2->down->up);
//            *temp_down2_u = cur1;
//        }
//        if (cur2->front) {
//            node** temp_front2_b = &(cur2->front->behind);
//            *temp_front2_b = cur1;
//        }
//        if (cur2->behind) {
//            node** temp_behind2_f = &(cur2->behind->front);
//            *temp_behind2_f = cur1;
//        }
//
//        if (cur1->right) {
//            cur2->right = *temp_right1;
//        }
//        if (cur1->left) {
//            cur2->left = *temp_left1;
//        }
//        if (cur1->up) {
//            cur2->up = *temp_up1;
//        }
//        if (cur1->down) {
//            cur2->down = *temp_down1;
//        }
//        if (cur1->front) {
//            cur2->front = *temp_front1;
//        }
//        if (cur1->behind) {
//            cur2->behind = *temp_behind1;
//        }
//
//        if (cur2->right) {
//            cur1->right = *temp_right2;
//        }
//        if (cur2->left) {
//            cur1->left = *temp_left2;
//        }
//        if (cur2->up) {
//            cur1->up = *temp_up2;
//        }
//        if (cur2->down) {
//            cur1->down = *temp_down2;
//        }
//        if (cur2->front) {
//            cur1->front = *temp_front2;
//        }
//        if (cur2->behind) {
//            cur1->behind = *temp_behind2;
//        }  //자기가 가리키는 화살표 스위칭
//
//       cur1->z = cur2->z;
//       cur1->y = cur2->y;
//       cur1->x = cur2->x;
//
//
//       cur2->z = temp_z;
//       cur2->y = temp_y;
//       cur2->x = temp_x;
//
//       cout << cur1->z << cur1->y << cur1->x << " " <<  cur1->count << endl;
//       cout << cur2->z << cur2->y << cur2->x << " " << cur2->count << endl;
//       cout << "\n";
//
//       print(cur1->z, cur1->y, cur1->x);
//       print(cur2->z, cur2->y, cur2->x);
//
//    }
    
    void turn(int place, int clock, int spin)
    {
        if(place == 0)
        {
            if (clock == 0)
            {
                if(spin == 0)
                {
                    Exchange(0, 0, 0, 0, 0, 2);
                    Exchange(1, 0, 0, 1, 0, 2);
                    Exchange(2, 0, 0, 2, 0, 2);
                    Exchange(0, 0, 1, 1, 0, 2);
                    Exchange(1, 0, 0, 2, 0, 1);
                    Exchange(0, 0, 0, 2, 0, 2);
                }
                else if(spin == 1)
                {
                    Exchange(0, 1, 0, 0, 1, 2);
                    Exchange(1, 1, 0, 1, 1, 2);
                    Exchange(2, 1, 0, 2, 1, 2);
                    Exchange(0, 1, 1, 1, 1, 2);
                    Exchange(1, 1, 0, 2, 1, 1);
                    Exchange(0, 1, 0, 2, 1, 2);
                }
                else if(spin == 2)
                {
                    Exchange(0, 2, 0, 0, 2, 2);
                    Exchange(1, 2, 0, 1, 2, 2);
                    Exchange(2, 2, 0, 2, 2, 2);
                    Exchange(0, 2, 1, 1, 2, 2);
                    Exchange(1, 2, 0, 2, 2, 1);
                    Exchange(0, 2, 0, 2, 2, 2);
                }
                else
                {
                    return;
                }
            }
            else if(clock == 1)
            {
                if(spin == 0)
                {
                    Exchange(0, 0, 0, 2, 0, 0);
                    Exchange(0, 0, 1, 2, 0, 1);
                    Exchange(0, 0, 2, 2, 0, 2);
                    Exchange(1, 0, 0, 2, 0, 1);
                    Exchange(0, 0, 1, 1, 0, 2);
                    Exchange(0, 0, 0, 2, 0, 2);
                }
                else if(spin == 1)
                {
                    Exchange(0, 1, 0, 2, 1, 0);
                    Exchange(0, 1, 1, 2, 1, 1);
                    Exchange(0, 1, 2, 2, 1, 2);
                    Exchange(1, 1, 0, 2, 1, 1);
                    Exchange(0, 1, 1, 1, 1, 2);
                    Exchange(0, 1, 0, 2, 1, 2);
                }
                else if(spin == 2)
                {
                    Exchange(0, 2, 0, 2, 2, 0);
                    Exchange(0, 2, 1, 2, 2, 1);
                    Exchange(0, 2, 2, 2, 2, 2);
                    Exchange(1, 2, 0, 2, 2, 1);
                    Exchange(0, 2, 1, 1, 2, 2);
                    Exchange(0, 2, 0, 2, 2, 2);
                }
            }
            else
            {
                return;
            }
        }
        else if(place == 1)
        {
            if (clock == 1)
            {
                if(spin == 0)
                {
                    Exchange(0, 2, 0, 0, 0, 0);
                    Exchange(0, 2, 1, 0, 0, 1);
                    Exchange(0, 2, 2, 0, 0, 2);
                    Exchange(0, 1, 0, 0, 0, 1);
                    Exchange(0, 2, 1, 0, 1, 2);
                    Exchange(0, 2, 0, 0, 0, 2);
                }
                else if(spin == 1)
                {
                    Exchange(1, 2, 0, 1, 0, 0);
                    Exchange(1, 2, 1, 1, 0, 1);
                    Exchange(1, 2, 2, 1, 0, 2);
                    Exchange(1, 1, 0, 1, 0, 1);
                    Exchange(1, 2, 1, 1, 1, 2);
                    Exchange(1, 2, 0, 1, 0, 2);
                }
                else if(spin == 2)
                {
                    Exchange(2, 2, 0, 2, 0, 0);
                    Exchange(2, 2, 1, 2, 0, 1);
                    Exchange(2, 2, 2, 2, 0, 2);
                    Exchange(2, 1, 0, 2, 0, 1);
                    Exchange(2, 2, 1, 2, 1, 2);
                    Exchange(2, 2, 0, 2, 0, 2);
                }
                else
                {
                    return;
                }
            }
            else if(clock == 0)
            {
                if(spin == 0)
                {
                    Exchange(0, 2, 0, 0, 2, 2);
                    Exchange(0, 1, 0, 0, 1, 2);
                    Exchange(0, 0, 0, 0, 0, 2);
                    Exchange(0, 1, 0, 0, 0, 1);
                    Exchange(0, 2, 1, 0, 1, 2);
                    Exchange(0, 2, 0, 0, 0, 2);
                }
                else if(spin == 1)
                {
                    Exchange(1, 2, 0, 1, 2, 2);
                    Exchange(1, 1, 0, 1, 1, 2);
                    Exchange(1, 0, 0, 1, 0, 2);
                    Exchange(1, 1, 0, 1, 0, 1);
                    Exchange(1, 2, 1, 1, 1, 2);
                    Exchange(1, 2, 0, 1, 0, 2);
                }
                else if(spin == 2)
                {
                    Exchange(2, 2, 0, 2, 2, 2);
                    Exchange(2, 1, 0, 2, 1, 2);
                    Exchange(2, 0, 0, 2, 0, 2);
                    Exchange(2, 1, 0, 2, 0, 1);
                    Exchange(2, 2, 1, 2, 1, 2);
                    Exchange(2, 2, 0, 2, 0, 2);
                }
            }
            else
            {
                return;
            }
        }
        else if(place == 2)
        {
            if (clock == 0)
            {
                if(spin == 0)
                {
                    Exchange(0, 0, 0, 0, 2, 0);
                    Exchange(1, 0, 0, 1, 2, 0);
                    Exchange(2, 0, 0, 2, 2, 0);
                    Exchange(1, 0, 0, 2, 1, 0);
                    Exchange(0, 1, 0, 1, 2, 0);
                    Exchange(0, 0, 0, 2, 2, 0);
                }
                else if(spin == 1)
                {
                    Exchange(0, 0, 1, 0, 2, 1);
                    Exchange(1, 0, 1, 1, 2, 1);
                    Exchange(2, 0, 1, 2, 2, 1);
                    Exchange(1, 0, 1, 2, 1, 1);
                    Exchange(0, 1, 1, 1, 2, 1);
                    Exchange(0, 0, 1, 2, 2, 1);
                }
                else if(spin == 2)
                {
                    Exchange(0, 0, 2, 0, 2, 2);
                    Exchange(1, 0, 2, 1, 2, 2);
                    Exchange(2, 0, 2, 2, 2, 2);
                    Exchange(1, 0, 2, 2, 1, 2);
                    Exchange(0, 1, 2, 1, 2, 2);
                    Exchange(0, 0, 2, 2, 2, 2);
                }
                else
                {
                    return;
                }
            }
            else if(clock == 1)
            {
                if(spin == 0)
                {
                    Exchange(0, 0, 0, 2, 0, 0);
                    Exchange(0, 1, 0, 2, 1, 0);
                    Exchange(0, 2, 0, 2, 2, 0);
                    Exchange(1, 0, 0, 2, 1, 0);
                    Exchange(0, 1, 0, 1, 2, 0);
                    Exchange(0, 0, 0, 2, 2, 0);
                }
                else if(spin == 1)
                {
                    Exchange(0, 0, 1, 2, 0, 1);
                    Exchange(0, 1, 1, 2, 1, 1);
                    Exchange(0, 2, 1, 2, 2, 1);
                    Exchange(1, 0, 1, 2, 1, 1);
                    Exchange(0, 1, 1, 1, 2, 1);
                    Exchange(0, 0, 1, 2, 2, 1);
                }
                else if(spin == 2)
                {
                    Exchange(0, 0, 2, 2, 0, 2);
                    Exchange(0, 1, 2, 2, 1, 2);
                    Exchange(0, 2, 2, 2, 2, 2);
                    Exchange(1, 0, 2, 2, 1, 2);
                    Exchange(0, 1, 2, 1, 2, 2);
                    Exchange(0, 0, 2, 2, 2, 2);
                }
            }
            else
            {
                return;
            }
        }
        else
        {
            return;
        }
    }

};

int main(void)
{
    fstream f1;
    f1.open("WordBook.txt", ios::in);

    cube_3 cube;
    cube.insert3();

    while(!f1.eof())
    {
        int z;
        int y;
        int x;
        char name[50] = {'\0', };

        f1 >> z;
        f1 >> y;
        f1 >> x;
        f1 >> name;
        cube.insert(z, y, x, name);
        
    }

    f1.close();
    
    int command = 0;
    while(1)
    {
        int z = 0;
        int y = 0;
        int x = 0;
        char name[50] = {'\0', };
        
        cout << "Enter Any Command (1: Insert, 2: Delete, 3: Find, 4: Print, 5: Print_All, 6: Turn, 7: Exchange, 8: Exit) : ";
        cin >> command;
        
        if(command == 1)
        {
            cin >> z >> y >> x >> name;
            cube.insert(z, y, x, name);
        }
        else if(command == 2)
        {
            cin >> z >> y >> x >> name;
            cube.Delete(z, y, x, name);
        }
        else if(command == 3)
        {
            cin >> name;
            cube.find(name);
        }
        else if(command == 4)
        {
            cin >> z >> y >> x;
            cube.print(z, y, x);
        }
        else if(command == 5)
        {
            cube.print_all();
        }
        else if(command == 6)
        {
            cin >> z >> y >> x;
            cube.turn(z, y, x);
            cout << "Turn\n";
        }
        else if(command == 7)
        {
            int z1 = 0;
            int y1 = 0;
            int x1 = 0;
            int z2 = 0;
            int y2 = 0;
            int x2 = 0;
            cin >> z1 >> y1 >> x1 >> z2 >> y2 >> x2;
            cube.Exchange(z1, y1, x1, z2, y2, x2);
            cout << "Exchange\n";
        }
        
        else if(command == 8)
        {
            break;
        }
        
    }

    return 0;
}
