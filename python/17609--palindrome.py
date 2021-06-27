import copy

def solve(input_data: str) -> int:
    reversed_data = list(reversed(input_data))
    if reversed_data == input_data:
        return 0
    else:
        """
        Case 2: quasi palindrome or not a palindrome
        """
        length = len(input_data)
        for i in range(1, length // 2 + 1):
            begin_index = i - 1
            end_index = -i

            if input_data[begin_index] == input_data[end_index]:            continue
            if is_quasi_palindrome(copy.deepcopy(input_data), begin_index): return 1
            if is_quasi_palindrome(copy.deepcopy(input_data),   end_index): return 1
            
            # input data isn't a palindrome
            return 2


def is_quasi_palindrome(input_data: str, remove_index: int) -> bool:
    input_data.pop(remove_index)
    reversed_data = list(reversed(input_data))
    if reversed_data == input_data:
        return True
    return False


# main process
def main():
    # input_data = input_data()
    t = int(input())
    for string in range(t):
        string = list(input())
        answer = solve(string)
        print(answer)


if __name__ == "__main__":
    main()
