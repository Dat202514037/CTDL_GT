# Find maximum length subarray having a given sum

## Mô tả bài toán
- Đầu vào: 
    - Một mảng số nguyên $n$ phần tử.
    - Số nguyên $sum$: tổng cần tìm.
- Đầu ra:
    - In ra dãy con liên tiếp có độ dài lớn nhất sao cho tổng các phần tử bằng sum.
    - Nếu không tìm thấy dãy con nào thỏa mãn, in ra thông báo "subarray not found".

## Mô tả giải thuật
- Nhập số phần tử $n$, các phần tử của mảng a và tổng cần tìm $sum$.
- Khởi tạo biến L = 0 để lưu độ dài lớn nhất của dãy con tìm được và biến start = 0 để lưu vị trí bắt đầu của dãy con dài nhất.
- Sử dụng vòng lặp ngoài với biến i chạy từ 0 đến n-1 để chọn vị trí bắt đầu của dãy con.
- Với mỗi vị trí i, khởi tạo biến $tong = 0$ và sử dụng vòng lặp trong với biến j chạy từ i đến n-1:
    - Cộng dồn các phần tử a[j] vào tong.
    - Nếu tong == sum, kiểm tra độ dài dãy con hiện tại là j - i.
- Nếu độ dài này lớn hơn độ dài lớn nhất đã tìm được trước đó, cập nhật biến L và start.
- Sau khi chạy hết hai vòng lặp:
    - Nếu L = 0, thông báo không tìm thấy dãy con.
    - Nếu L khác 0, in dãy con dài nhất tìm được.

**Độ phức tạp thuật toán $O(n^2)$**

## Test case
### Case 1:
#### Input:
```
nhap so phan tu cua mang: 9
nhap tung phan tu cho mang: 5 6 -5 5 3 5 3 -2 0 
nhap tong: 8
```
#### Output:
```
-5 5 3 5 
```
---
### Case 2:
#### Input:
```
nhap so phan tu cua mang: 9
nhap tung phan tu cho mang: 5 6 -5 5 3 5 3 -2 0 
nhap tong: 30
```
#### Output:
```
subarray not found
```
