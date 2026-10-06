# Bài Toán Sắp Xếp Trên Cấu Trúc Mảng

## Mô tả bài toán

- **Input:** 
  - Số lượng phần tử trong mảng n.
  - Giá trị của từng phần tử trong mảng.
- **Output:** 
  - Lần lượt các bước thực hiện sắp xếp.


## Test case
### Selection - sort
#### Input:
    9
    101 23 57 13 25 121 87 36 13
#### Output:
    Buoc 1: 13 23 57 101 25 121 87 36 13 
    Buoc 2: 13 13 57 101 25 121 87 36 23 
    Buoc 3: 13 13 23 101 25 121 87 36 57 
    Buoc 4: 13 13 23 25 101 121 87 36 57 
    Buoc 5: 13 13 23 25 36 121 87 101 57 
    Buoc 6: 13 13 23 25 36 57 87 101 121 
    Buoc 7: 13 13 23 25 36 57 87 101 121 
    Buoc 8: 13 13 23 25 36 57 87 101 121 
    Buoc 9: 13 13 23 25 36 57 87 101 121 
    
### Insertion- sort
#### Input:
    9
    101 23 57 13 25 121 87 36 13
#### Output:
    Buoc 1: 23 101 57 13 25 121 87 36 13 
    Buoc 2: 23 57 101 13 25 121 87 36 13 
    Buoc 3: 13 23 57 101 25 121 87 36 13 
    Buoc 4: 13 23 25 57 101 121 87 36 13 
    Buoc 5: 13 23 25 57 101 121 87 36 13 
    Buoc 6: 13 23 25 57 87 101 121 36 13 
    Buoc 7: 13 23 25 36 57 87 101 121 13 
    Buoc 8: 13 13 23 25 36 57 87 101 121 
