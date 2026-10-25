# In-place merge two sorted arrays
## Mô tả bài toán
- Đầu vào: Hai mảng số nguyên a và b có kích thước n và m với các phần tử đã được sắp xếp theo thứ tự tăng dần.
- Đầu ra: Hai mảng a và b sau khi sắp xếp lại sao cho a chứa m phần tử nhỏ nhất và b chứa n phần tử còn lại trong tổng số m+n phần tử (Cả hai mảng đều được sắp xếp theo thứ tự tăng dần).
    - Lưu ý: Không sử dụng mảng phụ để lưu trữ kết quả.

## Mô tả giải thuật
- Duyệt từng phần tử của mảng b bằng vòng lặp ngoài.
- Với mỗi b[i], duyệt toàn bộ các phần tử của mảng a bằng vòng lặp trong.
    - Nếu b[i] < a[j], hoán đổi hai phần tử để đưa phần tử nhỏ hơn về mảng a và phần tử lớn hơn về mảng b.
- Sau khi hoàn thành việc hoán đổi, sắp xếp lại mảng b theo thứ tự tăng dần.

**Độ phức tạp thuật toán $O(n^2)$**

## Test case
### Case 1:
#### Input:
```
a[] = {1, 4, 7, 8, 10};
b[] = {2, 3, 9};
```
#### Output:
```
1 2 3 4 7
8 9 10
```
---
### Case 2:
#### Input:
```
a[] = {5, 6, 7, 8};
b[] = {1, 2, 3};
```
#### Output:
```
1 2 3 5
6 7 8
```
---
### Case 3:
#### Input:
```
a[] = {1, 2, 3, 4};
b[] = {5, 6, 7};
```
#### Output:
```
1 2 3 4
5 6 7
```