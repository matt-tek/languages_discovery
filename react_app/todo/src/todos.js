import React from "react";

const Todos = ({todos, deleteTodo}) => {

    const todolist = todos.lenght ? (
        <p>Nothing to do !</p>
    ) : (
        todos.map(todo => {
            return (
                <div key={todo.id}>
                    <span onClick={() => {deleteTodo(todo.id)}}>{todo.content}</span>
                </div>
            )
        })
    )
    return (
        <div>
            {todolist}
        </div>
    )
}

export default Todos