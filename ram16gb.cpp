#include <iostream>
#include <vector>
#include <random>

int main() {
    // 16GBのメモリを確保する
    const size_t num_elements = (16ULL * 1024 * 1024 * 1024) / sizeof(int);

    // int型のベクターを作成
    std::vector<int> large_vector(num_elements);

    // 乱数生成器の設定
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 1000000);

    // ベクターの各要素に乱数を割り当てる
    for (size_t i = 0; i < num_elements; ++i) {
        large_vector[i] = dis(gen);
    }

    std::cout << "16GBのメモリに乱数を格納しました。続行するには何かキーを押してください..." << std::endl;

    // ユーザーの入力を待つ
    std::cin.get();

    return 0;
}
