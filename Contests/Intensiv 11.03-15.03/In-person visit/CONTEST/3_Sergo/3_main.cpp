#include <iostream>
#include <vector>
#include <string>
#include <list>

// ��� �������
template <typename K, typename V>
class HashTable
{

private:
	static const int HASH_GROUPS = 100000;			// ���������� �������
	std::vector<std::list<std::pair <K, V>>> table; // ������ �������

	int hashFunct(K key)
	{
		return std::hash<K> {} (key) % HASH_GROUPS;

	}

public:


	HashTable() : table(HASH_GROUPS) {}


	// ���������� ����� : ��������
	void insert(K key, V value)
	{
		int hashValue = hashFunct(key);
		auto& cell = table[hashValue];
		for (auto& pair : cell)
		{
			if (pair.first == key)
			{
				pair.second = value;
				return;
			}
		}
		cell.emplace_back(key, value);
	}


	// ��������� �������� �� �����
	V get(K key)
	{
		int hashValue = hashFunct(key);
		for (const auto& pair : table[hashValue])
		{
			if (pair.first == key)
			{
				return pair.second;
			}
		}
		throw std::runtime_error("Key not found!");
	}


	// �������� �������� �� �����
	void remove(K key)
	{
		int hashValue = hashFunct(key);
		auto& cell = table[hashValue];
		for (auto& it = cell.begin(); it != cell.end(); ++it)
		{
			if (it->first == key)
			{
				cell.erase(it);
				return;
			}
		}
		throw std::runtime_error("Key not found");
	}

};


// ������� ��� �������
std::vector<HashTable<int, int>> prefix_hash()
{

}

int main()
{
	HashTable < size_t, int > a;
	size_t n, m, i, j;
	int value;
	std::cin >> n >> m;

	for (i = 0; i < n; i++)
	{
		std::cin >> value;
		a.insert(i, value);
	}

	for (i = 0; i < m; i++)
	{
		std::cin >> value;
		for (j = value; j < n; j++)
		{
			std::cout << a.get(j);
		}
	}
	return 0;
}