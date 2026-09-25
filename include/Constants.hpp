#pragma once

#include <bits/stdc++.h>

// Valid type aliases
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int u;

typedef std::pair<int, int> pii;
typedef std::pair<long long, long long> pll;
typedef std::pair<double, double> pdd;

typedef std::vector<int> vi;
typedef std::vector<long long> vll;
typedef std::vector<double> vd;
typedef std::vector<char> vc;
typedef std::vector<bool> vb;

typedef std::vector<pii> vpii;
typedef std::vector<pll> vpll;

typedef std::vector<std::vector<int>> mi;
typedef std::vector<std::vector<ll>> mll;
typedef std::vector<std::vector<char>> mc; // Fixed using char directly

#define CASE(case_nr, func_sol)
    case case_nr: func_sol; break;

#define DEFAULT(func_msg)
    default: func_msg; break;


#define input_file_name "input.in"
#define output_file_name "output.out"

template<typename T>
void Read(std::ifstream &fin, std::vector<T>& input) // Removed const from fin and input
{
    for(size_t i = 0; i < input.size(); i++) // Fixed <= to <
    {
        fin >> input[i];
    }
}

template<typename T>
void Print(std::ofstream &fout, const std::vector<T>& outputs, const std::string& msg = "") // Removed const from fout
{
    if (!msg.empty()) {
        fout << msg << ": ";
    }
    
    for (size_t i = 0; i < outputs.size(); i++) {
        fout << outputs[i] << (i + 1 < outputs.size() ? " " : "");
    }
    fout << "\n";
}
