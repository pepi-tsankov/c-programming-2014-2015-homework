#include <stdio.h>
#include <stdlib.h>
// index, size, data

// [0, 0, 0, 0, 0]
// [0, -1, -2, -3, -4 ...]

#define ENOENT 2
#define ENOMEM 12
#define EINVAL 22

struct vector_t {
	int *data;
	int index, size;
};

void vector_init(struct vector_t*);
void vector_destroy(struct vector_t*);
int vector_get_size(struct vector_t);
//float for returning resize multiplier
float vector_resize(struct vector_t*);
int vector_at(struct vector_t, int index);
int vector_push_back(struct vector_t*, int value);
int vector_pop_back(struct vector_t*);

int main() {
	struct vector_t v;
	vector_init(&v);
	do {
		printf("Choose operation:\n1. Add element\n2. Remove last element\n3. Check element\n");
		
		int input;
		do {
			scanf("%d", &input);
		} while ((input < 1) || (input > 3));

		if (input == 1) {
			int value;
			printf("Value?\n");
			scanf("%d", &value);
			vector_push_back(&v, value);
		} else if (input == 2) {
			vector_pop_back(&v);
		} else if (input == 3) {
			int index;
			printf("Index?\n");
			scanf("%d", &index);
			printf("%d\n", vector_at(v, index));
		}
		vector_resize(&v);
	} while (vector_get_size(v) != 0);
	vector_destroy(&v);

	return 0;
}

void vector_init(struct vector_t* v) {
	v->size = 5;
	v->index = 0;
	v->data = (int*) malloc(v->size * sizeof(int));
}

void vector_destroy(struct vector_t* v){
	free(v->data);
	v->size = 0;
	v->index = 0;
}

int vector_get_size(struct vector_t v) {
	return v.index;
}

int vector_push_back(struct vector_t* v, int value) {
	// is vector full?
	if (v->index == v->size)
		return ENOMEM;
	v->data[v->index++] = value;
	return 0;
}

int vector_at(struct vector_t v, int index) {
	// is valid index?
	if ((index < 0) || (index > v.size))
		return EINVAL;
	return v.data[index];
}

int vector_pop_back(struct vector_t* v) {
	// is vector empty?
	if (v->index == 0)
		return ENOENT;
	return v->data[--v->index];
}

float vector_resize(struct vector_t* v) {
	if (v->index == v->size) {
		v->size *= 2;
		return 2;
	} else if (v->index == v->size/2) {
		v->size /= 2;
		return 0.5;
	}
	return 1;
}
