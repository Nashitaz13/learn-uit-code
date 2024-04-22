#include<iostream>
#include<map>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int value;
    int row_position;
    int column_position;
    Node* next;
};

void create_new_node(Node** start, int non_zero_element, int row_index, int column_index ) {
    Node *temp, *r;
    temp = *start;
    if (temp == NULL) {
        temp = new Node();
        temp->value = non_zero_element;
        temp->row_position = row_index;
        temp->column_position = column_index;
        temp->next = NULL;
        *start = temp;
    } else {
        while (temp->next != NULL)
            temp = temp->next;
        r = new Node();
        r->value = non_zero_element;
        r->row_position = row_index;
        r->column_position = column_index;
        r->next = NULL;
        temp->next = r;
    }
}

Node* add_matrices(Node* start1, Node* start2) {
    Node* result = NULL;
    Node* current = NULL;

    while (start1 != NULL || start2 != NULL) {
        Node* temp = new Node();
        temp->next = NULL;

        if (start1 != NULL && start2 != NULL && start1->row_position == start2->row_position && start1->column_position == start2->column_position) {
            // Nếu vị trí hàng và cột của hai nút khớp nhau, cộng giá trị của chúng
            temp->value = start1->value + start2->value;
            temp->row_position = start1->row_position;
            temp->column_position = start1->column_position;
            start1 = start1->next;
            start2 = start2->next;
        } else if (start1 != NULL && (start2 == NULL || (start1->row_position < start2->row_position) || (start1->row_position == start2->row_position && start1->column_position < start2->column_position))) {
            // Nếu chỉ còn một ma trận hoặc vị trí hàng và cột của ma trận 1 nhỏ hơn ma trận 2
            temp->value = start1->value;
            temp->row_position = start1->row_position;
            temp->column_position = start1->column_position;
            start1 = start1->next;
        } else {
            // Trường hợp còn lại: chỉ có ma trận 2 hoặc vị trí hàng và cột của ma trận 2 nhỏ hơn ma trận 1
            temp->value = start2->value;
            temp->row_position = start2->row_position;
            temp->column_position = start2->column_position;
            start2 = start2->next;
        }

        // Thêm nút vào danh sách kết quả
        if (result == NULL) {
            result = temp;
            current = temp;
        } else {
            current->next = temp;
            current = current->next;
        }
    }

    return result;
}



Node* multiply_matrices(Node* start1, Node* start2, int m, int n, int p) {
    // Tạo một mảng 2D để lưu trữ kết quả
    int** result = new int*[m];
    for (int i = 0; i < m; i++) {
        result[i] = new int[p];
        for (int j = 0; j < p; j++) {
            result[i][j] = 0;
        }
    }

    // Duyệt qua ma trận thứ nhất
    for (Node* ptr1 = start1; ptr1 != NULL; ptr1 = ptr1->next) {
        // Duyệt qua ma trận thứ hai
        for (Node* ptr2 = start2; ptr2 != NULL; ptr2 = ptr2->next) {
            // Nếu cột của ma trận thứ nhất bằng hàng của ma trận thứ hai
            if (ptr1->column_position == ptr2->row_position) {
                // Nhân và cộng dồn vào kết quả
                result[ptr1->row_position][ptr2->column_position] += ptr1->value * ptr2->value;
            }
        }
    }

    // Chuyển đổi kết quả từ mảng 2D sang danh sách liên kết
    Node* start = NULL;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            if (result[i][j] != 0) {
                create_new_node(&start, result[i][j], i, j);
            }
        }
    }

    // Xóa mảng 2D
    for (int i = 0; i < m; i++) {
        delete[] result[i];
    }
    delete[] result;

    return start;
}

void print_matrix(Node* start) {
    // Tạo một ma trận để lưu giá trị từ danh sách liên kết
    int max_row = 0, max_col = 0;
    for (Node* temp = start; temp != NULL; temp = temp->next) {
        if (temp->row_position > max_row) max_row = temp->row_position;
        if (temp->column_position > max_col) max_col = temp->column_position;
    }

    // Cấp phát động cho ma trận
    int** matrix = new int*[max_row + 1];
    for(int i = 0; i <= max_row; ++i) {
        matrix[i] = new int[max_col + 1];
        // Khởi tạo tất cả các giá trị trong ma trận thành 0
        for(int j = 0; j <= max_col; ++j)
            matrix[i][j] = 0;
    }

    // Đổ giá trị từ danh sách liên kết vào ma trận
    for (Node* temp = start; temp != NULL; temp = temp->next) {
        matrix[temp->row_position][temp->column_position] = temp->value;
    }

    // In ra ma trận
    for (int i = 0; i <= max_row; ++i) {
        for (int j = 0; j <= max_col; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Giải phóng bộ nhớ đã cấp phát
    for(int i = 0; i <= max_row; ++i)
        delete [] matrix[i];
    delete [] matrix;
}

int main() {
    
    int p, q;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> p >> q;
    // Sử dụng cấp phát động để khởi tạo ma trận
    int** sparse_matrix1 = new int*[p];
    int** sparse_matrix2 = new int*[p];
    for(int i = 0; i < p; ++i) {
        sparse_matrix1[i] = new int[q];
        sparse_matrix2[i] = new int[q];
    }
    cout << "Enter the elements of the first matrix: ";
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            cin >> sparse_matrix1[i][j];
    cout << "Enter the elements of the second matrix: ";
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            cin >> sparse_matrix2[i][j];
    Node* start1 = NULL;
    Node* start2 = NULL;
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++) {
            if (sparse_matrix1[i][j] != 0)
                create_new_node(&start1, sparse_matrix1[i][j], i, j);
            if (sparse_matrix2[i][j] != 0)
                create_new_node(&start2, sparse_matrix2[i][j], i, j);
        }
    Node* result = add_matrices(start1, start2);
    print_matrix(result);

    // Giải phóng bộ nhớ đã cấp phát
    for(int i = 0; i < p; ++i) {
        delete [] sparse_matrix1[i];
        delete [] sparse_matrix2[i];
    }
    delete [] sparse_matrix1;
    delete [] sparse_matrix2;

    int m, n, g;
    cout << "Enter the number of rows and columns of the first matrix: ";
    cin >> m >> n;
    cout << "Enter the number of columns of the second matrix: ";
    cin >> g;
    // Sử dụng cấp phát động để khởi tạo ma trận
    int** sparse_matrix11 = new int*[m];
    int** sparse_matrix22 = new int*[n];
    for(int i = 0; i < m; ++i) {
        sparse_matrix11[i] = new int[n];
    }
    for(int i = 0; i < n; ++i) {
        sparse_matrix22[i] = new int[g];
    }
    cout << "Enter the elements of the first matrix: ";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> sparse_matrix11[i][j];
    cout << "Enter the elements of the second matrix: ";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < g; j++)
            cin >> sparse_matrix22[i][j];
    Node* mat1 = NULL;
    Node* mat2 = NULL;
    Node* result2 = NULL;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (sparse_matrix11[i][j] != 0)
                create_new_node(&mat1, sparse_matrix11[i][j], i, j);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < g; j++)
            if (sparse_matrix22[i][j] != 0)
                create_new_node(&mat2, sparse_matrix22[i][j], i, j);
    result2 = multiply_matrices(mat1, mat2, m, n, g);
    print_matrix(result2);

    // Giải phóng bộ nhớ đã cấp phát
    for(int i = 0; i < m; ++i) {
        delete [] sparse_matrix11[i];
    }
    for(int i = 0; i < n; ++i) {
        delete [] sparse_matrix22[i];
    }
    delete [] sparse_matrix11;
    delete [] sparse_matrix22;

    return 0;
}
