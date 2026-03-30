""" PoC of grep like software in Python, that will be compared to solution in C++. """

FILE_NAME = "poc_grep.txt"
PHRASE = "test"

def main() -> Bool:
    with open(FILE_NAME) as f:
        if PHRASE in f.read():
            print('True')
            return True 
    print("False")
    return False

if __name__ == "__main__":
    main()
