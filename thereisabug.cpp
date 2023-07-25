/*
圖書管理系統V0.9487
這程式為本公司負責維護和運作
但上一個負責此專案的工程師在維護功能2和3時搞砸了
老闆一氣之下把他給炒了
而現在其他人正忙得不可開交
只剩你手上沒案子
你就來幫忙修一下bug唄
by浮生
請將找到的bug以fscs{bug}的形式回傳
注意:不需要留空格
*/
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main()
{
    int ch, ich;                    // 選擇功能所使用的變數
    string tmp;                     // 字串暫存區
    vector<string> bname, ah, time; // 歸檔的地方
    while (true)
    {
        cout << "請選擇你所需要的功能(1.新增圖書 2.刪除圖書 3.找查圖書 4.更新圖書資料 5.顯示圖書列表 6.中止程式):";
        cin >> ch;
        if (ch == 1) // 功能1
        {
            cout << "請輸入要新增的書名:";
            cin >> tmp;
            bname.push_back(tmp);
            cout << "請輸入此書的作者:";
            cin >> tmp;
            ah.push_back(tmp);
            cout << "請輸入此書的出版日期(格式為12/2):";
            cin >> tmp;
            time.push_back(tmp);
        }
        else if (ch == 2) // 功能2
        {
            cout << "請選擇搜尋方式(1.以編號 2.以書名):";
            cin >> ich;
            if (ich == 1) // 用編號以二分搜的方式搜尋
            {
                int min = 0, max = (int)bname.size();
                int target1;
                cout << "請輸入此書的編號:";
                cin >> target1;
                target1 = target1 - 1;
                while (true)
                {

                    if (middle == target1)
                    {
                        bname.erase(bname.begin() + target1);
                        ah.erase(ah.begin() + target1);
                        time.erase(time.begin() + target1);
                        cout << "(已刪除此書)" << endl;
                        break;
                    }
                    else if (middle > target1)
                    {
                        max = middle;
                    }
                    else
                    {
                        min = middle;
                    }
                }
            }
            else // 直接以書名搜尋
            {
                string target2;
                cout << "請輸入此書的書名:";
                cin >> target2;
                for (int i = 0; i < (int)bname.size(); i++)
                {
                    if (bname[i] == target2)
                    {
                        bname.erase(bname.begin() + i);
                        ah.erase(ah.begin() + i);
                        time.erase(time.begin() + i);
                        cout << "(已刪除此書)" << endl;
                        break;
                    }
                }
            }
        }
        else if (ch == 3) // 功能3
        {
            cout << "請選擇搜尋方式(1.編號 2.書名 3.作者 4.出版時間):";
            cin >> ich;
            if (ich == 1)
            {
                int min = 0, max = (int)bname.size();
                int Target;
                cout << "請輸入此書的編號:";
                cin >> Target;
                while (true) // 用編號以二分搜的方式搜尋
                {
                    int middle = (max + min) / 2;
                    if (middle == Target)
                    {
                        cout << "編號\t書名\t作者\t出版日期" << endl;
                        cout << Target << "\t" << bname[Target] << "\t" << ah[Target] << "\t" << time[Target] << endl;
                        break;
                    }
                    else if (middle > Target)
                    {
                        max = middle;
                    }
                    else
                    {
                        min = middle;
                    }
                }
            }
            else if (ich == 2) // 直接以書名搜尋
            {
                string target;
                cout << "請輸入此書的書名:";
                cin >> target;
                cout << "編號\t書名\t作者\t出版日期" << endl;
                for (int i = 0; i < (int)bname.size(); i++)
                {
                    if (bname[i] == target)
                    {
                        cout << (i + 1) << "\t" << bname[i] << "\t" << ah[i] << "\t" << time[i] << endl;
                        break;
                    }
                }
            }
            else if (ich == 3) // 直接以作者搜尋
            {
                string target;
                cout << "請輸入此書的作者:";
                cin >> target;
                cout << "編號\t書名\t作者\t出版日期" << endl;
                for (int i = 0; i < (int)bname.size(); i++)
                {
                    if (ah[i] == target)
                    {
                        cout << (i + 1) << "\t" << bname[i] << "\t" << ah[i] << "\t" << time[i] << endl;
                        break;
                    }
                }
            }
            else if (ich == 4) // 直接以出版日期搜尋
            {
                string target;
                cout << "請輸入此書的出版日期:";
                cin >> target;
                cout << "編號\t書名\t作者\t出版日期" << endl;
                for (int i = 0; i < (int)bname.size(); i++)
                {
                    if (bname[i] == target)
                    {
                        cout << i + 1 << "\t" << bname[i] << "\t" << ah[i] << "\t" << time[i] << endl;
                        break;
                    }
                }
            }
        }
        else if (ch == 4) // 功能4
        {
            cout << "請選擇搜尋方式(1.編號 2.書名):";
            cin >> ich;
            if (ich == 1) // 用編號以二分搜的方式搜尋
            {
                int min = 0, max = (int)bname.size();
                int target;
                string tmp1;
                cout << "請輸入此書的編號:";
                cin >> target;
                target = target - 1;
                while (true)
                {
                    int middle = (min + max) / 2;
                    if (middle == target)
                    {
                        int uch;
                        cout << "請選擇要修改的部分(1.書名 2.作者 3.出版日期)";
                        cin >> uch;
                        if (uch == 1) // 修改特定資料
                        {
                            cout << "請輸入新的書名:";
                            cin >> tmp1;
                            bname.erase(bname.begin() + target);
                            bname.insert(bname.begin() + target, tmp1);
                        }
                        else if (uch == 2)
                        {
                            cout << "請輸入新的作者:";
                            cin >> tmp1;
                            ah.erase(bname.begin() + target);
                            ah.insert(bname.begin() + target, tmp1);
                        }
                        else if (uch == 3)
                        {
                            cout << "請輸入新的出版日期(格式:12/2):";
                            cin >> tmp1;
                            time.erase(bname.begin() + target);
                            time.insert(bname.begin() + target, tmp1);
                        }
                        cout << "編號\t書名\t作者\t出版日期" << endl;
                        cout << target << "\t" << bname[target] << "\t" << ah[target] << "\t" << time[target] << endl;
                        break;
                    }
                    else if (middle > target)
                    {
                        max = middle;
                    }
                    else
                    {
                        min = middle;
                    }
                }
            }
            else if (ich == 2) // 直接以書名搜尋
            {
                string target, tmp1;
                cout << "請輸入此書的書名:";
                cin >> target;
                for (int i = 0; i < (int)bname.size(); i++)
                {
                    if (bname[i] == target)
                    {
                        int uch;
                        cout << "請選擇要修改的部分(1.書名 2.作者 3.出版日期)";
                        cin >> uch;
                        if (uch == 1) // 修改特定資料
                        {
                            cout << "請輸入新的書名:";
                            cin >> tmp1;
                            bname.erase(bname.begin() + i);
                            bname.insert(bname.begin() + i, tmp1);
                        }
                        else if (uch == 2)
                        {
                            cout << "請輸入新的作者:";
                            cin >> tmp1;
                            ah.erase(ah.begin() + i);
                            ah.insert(bname.begin() + i, tmp1);
                        }
                        else if (uch == 3)
                        {
                            cout << "請輸入新的出版日期(格式:12/2):";
                            cin >> tmp1;
                            time.erase(time.begin() + i);
                            time.insert(bname.begin() + i, tmp1);
                        }
                        cout << "編號\t書名\t作者\t出版日期" << endl;
                        cout << (i + 1) << "\t" << bname[i] << "\t" << ah[i] << "\t" << time[i] << endl;
                        break;
                    }
                }
            }
        }
        else if (ch == 5) // 功能5
        {
            cout << "編號\t書名\t作者\t出版日期" << endl;
            for (int i = 0; i < (int)bname.size(); i++) // 列出書單
            {
                cout << (i + 1) << "\t" << bname[i] << "\t" << ah[i] << "\t" << time[i] << endl;
            }
        }
        else if (ch == 6) // 功能6
        {
            break;
        }
    }
    return 0;
}
