# Sort an array of 0’s, 1’s, and 2’s (Dutch National Flag Problem)

## Mô tả bài toán
- Đầu vào: Mảng số nguyên a[] chỉ chứa các phần tử 0, 1, 2.
- Đầu ra: Mảng sau khi sắp xếp theo thứ tự tăng dần.

## Mô tả giải thuật
- Khởi tạo ba biến first = 0, mid = 0, last = n - 1.
- Khi mid <= last, thực hiện:
    - Nếu a[mid] == 0, hoán đổi a[mid] với a[first], sau đó tăng first và mid thêm 1 đơn vị.
    - Nếu a[mid] == 1, chỉ tăng mid thêm 1 đơn vị.
    - Nếu a[mid] == 2, hoán đổi a[mid] với a[last], sau đó giảm last đi 1 đơn vị.
- Khi mid > last, kết thúc vòng lặp.
- Gọi hàm in() để in mảng sau khi sắp xếp.

**Độ phức tạp thuật toán $O(n)$**

## Test case
### Case 1:
#### Input:
```
{ 0, 1, 2, 2, 1, 0, 0, 2, 0, 1, 1, 0 }
```
#### Output:
```
0 0 0 0 0 1 1 1 2 1 2 2
```
---
### Case 2:
#### Input:
```
{ 2, 1, 2, 1, 2, 1 }
```
#### Output:
```
1 1 1 2 2 2 
```
