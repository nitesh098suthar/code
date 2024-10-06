#include <iostream>
#include <bits/stdc++.h>
#include <vector>        // for vector in case we use it.
#include <map>           //for map
#include <unordered_map> //for unordered map
using namespace std;

// ++++++++++++++++++QUESTIONS+++++++++++++++++++

// 1. find maximum occuring char in a string (2 ways to solve - a. simple b. map)
// 2. find maximum occuring word in a string using map.

// +++++++++++++++++++++++++++++++++++++++++++++

// hashmap is container of pairs (key and value)
// key must be unique value can be same but key can't
int main()
{

    // 2types of map
    // map (its ordered map) and unordered_map (its unordered map)
    // the data traverse in the map in ordered form but in the unordered map the pair always traverse in unordered form

    // map time complexitt is log n when we use it.
    // unordered_map tc is 0(1)
    // map timecomplexity o(logn)

    // linked list time complexity - o(n)
    // BST (Binary search tree) - o(logn)
    // hashtable time complextiy - o(1)

    // creation of unordered_map
    // syntex :
    // unordered_map<key, value> unordered_map_name;
    // key ke corresponding value hoti hai ...yha key as a index hi kam kar rhi hai..jisme value change hoti hai or key same vhi bni rahti hai.
    unordered_map<string, int> m;

    // insert in unordered_map way 1 : using pair and insert keyword of map;

    // there are three ways to insert in the pair;
    // way one in the pair is
    // pair<string, int> p1;
    //  p1.first = "string_value";
    //  p1.second = 45;

    // cout<<p1.first;  //for print the pair first value;
    // cout<<p1.second;  //for print the pair of second value;

    // way two to create a pair;
    //  pair<string, int> p1 = make_pair("nitesh", 5); //like map we dont need to import pair in the document.
    //  m.insert(p1); //pair inserted into m unordered map

    // insert in the unordered_map way 3 : using without make_pair();
    //  pair<string, int> p2("nitesh", 5);
    // m.insert(p2);  //pair p2 inserted into m unordered map

    // insert in the unordered_map way 3 : using map["string"] = value;
    m["nitesh"] = 1;
    m["kumar"] = 2; // at this line the value of 2 is kumar;
    m["suthar"] = 3;
    m["singh"] = 2; // at this line the value of 2 is singh;
    // key 2 is updated kumar -> singh; but the value is still there if
    // if I cout<<m["singh"]; //output 2
    // if I cout<<m["kumar"]; //output 2

    cout << m["kumar"];
    cout << m["singh"];

    cout << m["nitesh"];
    cout << m.at("nitesh"); // this and above line is  not same *****

    // if I try to print the string that doesnt exist with m.at("unknown"), the code will generate the error
    // if I print the string that doesnt exist with m["unknown"], the code will print output : 0
    // this is the difference I talked about between both of them.

    cout << m["unknown"];    // output : 0
    cout << m.at("unknown"); // output : 0 because the above line create an entry at 0 and If I print it by m.at("") then it's printing the value which is already exist which is created by the above line

    // but but but ---
    // if I print the value using m.at() first, and then after the m[""] = value; the line m.at() will throw an error and the line of m[""] = value; will create an entry at 0;

    cout << endl
         << "size of the map: " << m.size() << endl;
    // the size of the map will be 5 because at the value of 2 is -> kumar and singh both value;

    // to check is presence in the map
    cout << m.count("singh"); // print 1 (true) because it print boolean value;

    // to erase a key from the map
    m.erase("singh");
    cout << "after removing the singh the size of the map will be : " << m.size(); // now size is : 4;

    // traversing the map : 2 ways a. loop b. iterator

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    // I put the value "singh" again at 2 which was I deleted earliear then print the size and the iterate it

    m["singh"] = 2;
    cout << endl
         << "size of the map: " << m.size() << endl;
    cout << endl
         << "final iteration" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    // output: unknown 0
    //  nitesh 1
    //  kumar 2
    //  singh 2
    //  suthar 3

    // traverse the map using iterator*********very important*****
    cout << endl
         << "iteration through itertor" << endl;
    // syntex =>>
    // unordered_map<key, value> :: iterator iterator_name = where_to_begin_iterator
    unordered_map<string, int>::iterator it = m.begin();

    while (it != m.end())
    {
        cout << it->first << "  " << it->second << endl;
        it++;
    }

    // when I create a unordered map it traverse the data in unordered for and unlike unordered_map map traverse the data in sequence wise means the data will be printed first which inserted first

    // ***important**** question : maximum frequency number => jo no. array me jyada baar occuring hai use print kr do

    //  *********************************
    // bucket array
    // hash function - a. hash code (if upcoming data index is greater than our array then we take the mod (%) of the upcoming data index with the size(not index keep remember) of our array) b. compression function
    // hash table
    // hash code -> where to put data (for prevent collision and uniform distribution)
    // collision in hashing
    // collision handling in hashing - 1.open hashing (next box me data dalo)   2. close addressing aka seperate chaining (same box me ek linkedlist bana lo or linkedlist me data dalte raho par linked list me bahot jayada data nhi aata because hash code bade pyar se banaye jate hai jo uniform distribution karte hai data ka (uniform distribution means data seperate box me dalna))
    // close addressing :
    // 1. linear probing => data usi box me daal do jha aa rha hai agar vha pehle se data ho to next attempt lo next attempt me index +1 ho jayega....and so on till we're not able to find the empty box
    // linear probing ke case me f(i) = i hota hai where i is representing index
    // (1st attempt) = f(i) = i+1 => linear probing me i ki value +1 hoti rehti hai per next time. (agar next box khali na ho to)

    // 2. quadratic probing : data usi box me daal do jha aa rha hai agar vha pehle se data ho to next attempt lo next attempt me index ki value index^2 ho jayegi....and so on till we're not able to find the empty box
    // f(i) = i (agar yha data hai to..first attempt lo)
    // h base i (a) = h(a) + f base i (a)

    // h(a) => the index where initially data should be put (but we're considering that on that index there is already some data so we'll take our first attempt)

    // our first attempt will be taken by this formula  h base i (a) = h(a) + f base i (a) => so consider our data is coming for 7th index but there is already data present at the 7th index
    // so we'll take our first attempt like this

    // h base i (a) = 7 + 1^2 => 8 (we'll check 8th index if its empty then we'll put our data at 8th index but if its not the we'll take our next attempt like below)
    // now
    // h base i (a) = 7 + 2^2 (if available then put otherwise take nex attempt like below)
    // h base i (a) = 7 + 3^2...and so on

    // note : we can create our own probing technique for putting data using close addressing like below _onexit

    // h base i (a) = 7 + 1^3 ..... etc

    //  *********************************

    // time complexity analysis in the hashmap

    //         we assume n >>
    //     k(n is far far greater than k) where n is length of map and k is length of the data we want to delete,
    //     insert or search in the map
    //                   so we assume that k is very less and complexity would be ~0(1)

    //     ******************************************************

    //             n = no. of entries(data we want to put) in the map
    //             b = no. of boxes(empty indexs) available

    //             so =>> no. of entries in a box = n/b (n/b > 0.7 is aka load fector)
    //             and n/b > 0.7 must so data can be easliy uniform distributed and do not create a long linked list in close addressing

    // if n/ b is not > 0.7 than increase the boxes of the map thats technique called rehashing
    //  rehashing = n / 2b

                                     return 0;
}