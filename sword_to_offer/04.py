def find(matrix, number):
    found = False
    if matrix != None:
        rows = len(matrix)
        columns = len(matrix[0])
        row = 0
        column = columns - 1
        while row < rows and column >= 0:
            if matrix[row][column] == number:
                found = True
                break
            elif matrix[row][column] > number:
                column -= 1
            else:
                row += 1
    return found

def find1(matrix, number):
    found = False
    if matrix != None:
        rows = len(matrix)
        columns = len(matrix[0])
        row = rows - 1
        column = 0
        while row >= 0 and column < columns:
            if matrix[row][column] == number:
                found = True
                break
            elif matrix[row][column] > number:
                row -= 1
            else:
                column += 1
    return found

if __name__ == "__main__":
    matrix = [[1,2,8,9],[2,4,9,12],[4,7,10,13],[6,8,11,15]]
    number = 7
    print(find(matrix, number))
