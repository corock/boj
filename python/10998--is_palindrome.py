def is_palindrome(input_data: str) -> bool:
    length = len(input_data)
    for i in range(1, length // 2 + 1):
        if input_data[i - 1] != input_data[-i]:
            return 0
    return 1


input_data = input()
print(is_palindrome(input_data))
