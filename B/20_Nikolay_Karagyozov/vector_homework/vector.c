//Направете нужните проверки в метдоите в които има коментари.
//Съобразете стойностите които ще върнете, при възникване на грешка.
//Допишете vector_resize, като при нужда на повече от повече елементи увеличава вектора 2 пъти или
//при възможност да намалява вектора 2 пъти. Променете връщаната стойност на прототипа на функцията и
//връщайте резултат от оразмеряването. Демонстрирайте използването на вектора и се обосновете с коментар,
//какъв тип и защо сте го избрали за връщане на стойност от vector_resize

#include <stdio.h>
#include <stdlib.h>

// index, size, data

// [0, 0, 0, 0, 0]
// [0, -1, -2, -3, -4 ...]

struct vector_t {
	int *data;
	int index, size;
};

void vector_init(struct vector_t*);
void vector_destroy(struct vector_t*);
int vector_get_size(struct vector_t);
int vector_resize(struct vector_t*);
int vector_at(struct vector_t, int index);
void vector_push_back(struct vector_t*, int value);
int vector_pop_back(struct vector_t*);

int main() {
    
    struct vector_t vector;
    vector_init(&vector);
    vector_push_back(&vector, 1);
    vector_push_back(&vector, 2);
    vector_push_back(&vector, 3);
    vector_push_back(&vector, 4);

    int i;
    printf("After push back: ");
    for (i = 0; i < vector_get_size(vector); i++)
    {
        printf("%d ", vector_at(vector, i));
    }
    printf("\nVector size: %d\n", vector.size);
    printf("\nAfter 2 pops: ");

    vector_pop_back(&vector);
    vector_pop_back(&vector);

    for (i = 0; i < vector_get_size(vector); i++)
    {
        printf("%d ", vector_at(vector, i));
    }
    printf("\nVector size: %d\n", vector.size);

    vector_destroy(&vector);
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

void vector_push_back(struct vector_t* v, int value) {
	if (v->index == v->size)
    {
        vector_resize(v);
    }
	v->data[v->index++] = value;
}

int vector_at(struct vector_t v, int index) {
	if (v.index >= 0 ||
        v.index <= v.size)
    {
        return v.data[index];
    }
	else
    {
        return -1; //returns -1 if the index is invalid
    }
}

int vector_pop_back(struct vector_t* v) {
	if (v-> index < 0)
    {
        return -1; // return -1 if vector is empty
    }
    else
    {
        vector_resize(v);
        return v->data[--v->index];
    }
}

int vector_resize(struct vector_t* v) {
    if (v->index >= v->size)
    {
        return v->size *= 2;
    }
    else if (v->index <= v->size/2 + 1)
    {
        return v->size /= 2;
    }
    else
    {
        return -1; // returns -1 if resizing failed
    }
    return 0; // returns 0 if the vector was successfully resized
}
