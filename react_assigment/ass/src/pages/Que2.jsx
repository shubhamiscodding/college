import { useState } from 'react'

const Que2 = () => {
    const [todos, setTodos] = useState([]);
    const [inputValue, setInputValue] = useState('');

    const handleAddTodo = () => {
        if (inputValue.trim() !== '') {
            setTodos([...todos, { id: Date.now(), text: inputValue }]);
            setInputValue('');
        }
    };

    const handleDeleteTodo = (id) => {
        setTodos(todos.filter(todo => todo.id !== id));
    };

    return (
        <div className="max-w-md mx-auto mt-10 p-6 bg-white rounded-lg shadow-lg">
            <h1 className="text-2xl font-bold mb-4">Todo List</h1>
            <div className="flex gap-2 mb-4">
                <input
                    type="text"
                    value={inputValue}
                    onChange={(e) => setInputValue(e.target.value)}
                    placeholder="Add a new todo"
                    className="flex-1 p-2 border rounded"
                />
                <button
                    onClick={handleAddTodo}
                    className="px-4 py-2 bg-blue-500 text-white rounded hover:bg-blue-600"
                >
                    Add
                </button>
            </div>
            <ul className="space-y-2">
                {todos.map(todo => (
                    <li
                        key={todo.id}
                        className="flex justify-between items-center p-2 bg-gray-50 rounded"
                    >
                        <span>{todo.text}</span>
                        <button
                            onClick={() => handleDeleteTodo(todo.id)}
                            className="px-2 py-1 bg-red-500 text-white rounded hover:bg-red-600"
                        >
                            Delete
                        </button>
                    </li>
                ))}
            </ul>
        </div>
    )
}

export default Que2